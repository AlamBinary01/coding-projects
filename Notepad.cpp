#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;
struct node
{
    char data;
    node* right;
    node* left;
    node* up;
    node* down;
};
node** line_head = NULL, ** line_tail = NULL;
int head_size = 0, tail_size = 0;
node** resize(node**, int&);
int k = 7;
void Change_Font_Color();
void Print_Horizontal_Line();
class Stack
{
    char data;
    bool isDelete;
public:
    Stack();
    void setIsDelete(bool);
    void setData(char);
    char getData();
    bool getIsDelete();
    void Push(char, bool);
};
Stack::Stack()
{
    isDelete = false;
    this->data = 'x';
}
void Stack::Push(char ptr, bool isDelete)
{
    this->isDelete = isDelete;
    this->data = ptr;
}
void Stack::setIsDelete(bool a)
{
    this->isDelete = a;
}
void Stack::setData(char a)
{
    this->data = a;
}
char Stack::getData()
{
    return data;
}
bool Stack::getIsDelete()
{
    return isDelete;
}
Stack* resize(Stack*, int&);
class List
{
    node* head, * tail, * line_temp;
    float count, break_lines;
    Stack* undo_obj, redo;
    int undo_size;
    bool redo_check;
    friend Stack* resize(Stack*, int&);
public:
    List();
    node* GetHead();
    node* GetTail();
    void Create_Node(char, bool);
    void Delete_Node(bool);
    void Display_List();
    void Push_Stack(char, bool);
    void Pop_Stack();
    void Redo_Push(char, bool);
    void Redo_Pop();
    void Highlight_Word();
    void Find_Word();
    void Replace_Word();
};
node* List::GetHead()
{
    return head;
}
node* List::GetTail()
{
    return tail;
}
List::List()
{
    head = NULL;
    tail = NULL;
    line_temp = NULL;
    undo_obj = NULL;
    count = 0;
    break_lines = 1;
    undo_size = 0;
    redo_check = false;
}
void List::Create_Node(char data, bool undo_check)
{
    node* new_node = new node;
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->up = NULL;
    new_node->down = NULL;
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        count++;
        line_head = resize(line_head, head_size);
        line_head[head_size - 1] = head;
        line_temp = head;
        Push_Stack(data, false);
        return;
    }
    tail->right = new_node;
    new_node->left = tail;
    tail = new_node;
    count++;
    if (undo_check)
        Push_Stack(data, false);
    if (tail_size != 0)
    {
        tail->up = line_temp;
        line_temp->down = tail;
        if (line_temp->data != '\n')
            line_temp = line_temp->right;
    }
    if ((count / 60) == break_lines)
    {
        node* temp = new_node;
        Create_Node('\n', true);
        break_lines = break_lines + 1;
    }
    else if (data == '\n')
    {
        line_temp = line_head[head_size - 1];
        line_tail = resize(line_tail, tail_size);
        line_tail[tail_size - 1] = tail;
        line_head = resize(line_head, head_size);
        line_head[head_size - 1] = NULL;
        while (fmod(count, 60) != 0)
        {
            count++;
        }
        count++;
        break_lines++;
    }
    if ((tail->left->data == '\n'))
        line_head[head_size - 1] = tail;

}
void List::Delete_Node(bool undo_check)
{
    if (head == NULL)
        return;
    if (tail->left == NULL)
        head = NULL;
    if (tail->data == '\n')
    {
        break_lines--;
        head_size--;
        tail_size--;
    }
    if (tail == NULL)
        return;
    if (head != NULL)
    {
        if (undo_check)
            Push_Stack(tail->data, true);
        node* temp = tail->left;
        temp->right = NULL;
        free(tail);
        tail = temp;
        count--;
    }
}
void List::Display_List()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, k);
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->right;
    }
}
void List::Push_Stack(char ptr, bool isDelete)
{
    undo_obj = resize(undo_obj, undo_size);
    undo_obj[undo_size - 1].setData(ptr);
    undo_obj[undo_size - 1].setIsDelete(isDelete);
    redo_check = false;
}
void List::Pop_Stack()
{
    if (undo_size == 0)
        return;
    Redo_Push(undo_obj[undo_size - 1].getData(), undo_obj[undo_size - 1].getIsDelete());
    if ((undo_obj[undo_size - 1].getIsDelete()))
        Create_Node(undo_obj[undo_size - 1].getData(), true);
    else
        Delete_Node(true);
    undo_size = undo_size - 2;
    if (undo_size < 0)
        undo_size = 0;
    redo_check = true;
}
void List::Redo_Push(char ptr, bool isDelete)
{
    redo.setData(ptr);
    redo.setIsDelete(isDelete);
}
void List::Redo_Pop()
{
    if (redo_check)
        if (!redo.getIsDelete())
            Create_Node(redo.getData(), true);
        else
            Delete_Node(true);
    redo_check = false;
}
void List::Highlight_Word()
{
    this->Display_List();
    Print_Horizontal_Line();
    string temp;
    cout << endl << endl;
    cout << "Enter Word to Highlight: ";
    getline(cin, temp);
    char* arr = new char[temp.length() + 1];
    for (int i = 0; i < temp.length(); i++)
        arr[i] = temp[i];
    arr[temp.length()] = '\0';
    node* t1 = head, * t2;
    bool fh = true;
    while (t1 != NULL)
    {
        if (t1->data == arr[0])
        {
            t2 = t1;
            for (int i = 0; i < temp.length(); i++)
            {
                if (t2 != NULL)
                {
                    if (t2->data != arr[i])
                    {
                        fh = false;
                        break;
                    }
                }
                else
                    break;
                t2 = t2->right;
            }
            if (fh)
            {
                for (int i = 0; i < temp.length(); i++)
                {
                    HANDLE  hConsole;

                    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                    int colour = 3;
                    if (k == 3)
                        colour = 4;
                    SetConsoleTextAttribute(hConsole, colour);
                    cout << t1->data;
                    t1 = t1->right;
                }
                if (t1 != NULL)
                    cout << t1->data;
            }
            else
            {
                HANDLE  hConsole;

                hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hConsole, k);
                cout << t1->data;
            }
        }
        else
        {
            HANDLE  hConsole;

            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(hConsole, k);
            cout << t1->data;
        }
        t1 = t1->right;
        fh = true;
    }
    Print_Horizontal_Line();
    cout << "Press Enter to Continue...";
    getchar();
    system("cls");
}

void List::Find_Word()
{
    int count_words = 0;
    string temp;
    cout << "Enter Word to Find: ";
    getline(cin, temp);
    char* arr = new char[temp.length() + 1];
    for (int i = 0; i < temp.length(); i++)
        arr[i] = temp[i];
    arr[temp.length()] = '\0';
    node* t1 = head, * t2;
    bool fh = true;
    while (t1 != NULL)
    {
        if (t1->data == arr[0])
        {
            t2 = t1;
            for (int i = 0; i < temp.length(); i++)
            {
                if (t2 != NULL)
                {
                    if (t2->data != arr[i])
                    {
                        fh = false;
                        break;
                    }
                }
                else
                    break;
                t2 = t2->right;
            }
            if (fh)
            {
                count_words++;
            }
        }
        t1 = t1->right;
        fh = true;
    }
    cout << endl << endl << count_words << " results found for " << "\"" << temp << "\"" << "." << endl << endl << "Press Enter to Continue...";
    getchar();
}
void List::Replace_Word()
{
    string temp, replacement;
    Stack* obj = NULL;
    int obj_size = 0;
    cout << "Enter Word to Replace: ";
    getline(cin, temp);
    cout << "Enter the Required Word: ";
    getline(cin, replacement);
    const unsigned int string_length = temp.length(), replace_length = replacement.length();
    char* arr = new char[string_length];
    for (unsigned int i = 0; i < string_length; i++)
        arr[i] = temp[i];
    char* replaced_word = new char[replace_length];
    for (unsigned int i = 0; i < replace_length; i++)
        replaced_word[i] = replacement[i];
    node* t1 = head, * t2 = NULL, * t3 = head;
    bool fh = false, check = false;
    List new_obj;
    while (t1 != NULL)
    {
        if (t1->data == arr[0])
        {
            fh = true;
            t2 = t1;
            for (int i = 0; i < temp.length(); i++)
            {
                if (t2 != NULL)
                {
                    if (t2->data != arr[i])
                    {
                        fh = false;
                        break;
                    }
                }
                else
                    break;
                t2 = t2->right;
            }
            if (fh)
                check = true;
            fh = true;
        }
        t3 = head;
        if (check)
        {
            while (t3 != NULL)
            {
                if (t3 == t1)
                {
                    for (unsigned int i = 0; i < replace_length; i++)
                    {
                        new_obj.Create_Node(replaced_word[i], true);
                    }
                    for (unsigned int i = 0; i < string_length; i++)
                    {
                        t3 = t3->right;
                    }
                }
                new_obj.Create_Node(t3->data, true);
                t3 = t3->right;
            }
            this->head = new_obj.GetHead();
            this->tail = new_obj.GetTail();
            t1 = new_obj.GetHead();
            t3 = new_obj.GetHead();
            break;
        }
        t1 = t1->right;
        check = false;
        fh = true;
    }
    Print_Horizontal_Line();
    if (check)
    {
        this->Display_List();
        Print_Horizontal_Line();
        cout << "The first occurrence of \"" << temp << "\"" << " has been replaced by " << "\"" << replacement << "\"" << " in the document..";
    }
    else
        cout << "Couldn't find any occurrence of " << "\"" << temp << "\"" << " in the document...";
    cout << endl << endl << "Press Enter to Continue...";
    getchar();
}
void Main_Menu();
void Notepad();
void Print_Instructions();
int main()
{
    Main_Menu();
    cout << endl;
    return 0;
}
void Main_Menu()
{
    Print_Instructions();
    char input;
    bool fh = true;
    while (fh)
    {
        input = _getch();
        switch (input)
        {
        case 27:
            fh = false;
            break;
        case 9:
        case 13:
            Notepad();
            break;
        default:
            break;
        }
        system("cls");
        Print_Instructions();
    }
}
void Notepad()
{
    system("cls");
    char input;
    static List obj;
    obj.Display_List();
    bool fh = true;
    while (fh)
    {
        input = _getch();
        system("cls");
        if (input == 8 || input == 127)
            obj.Delete_Node(true);
        else if (input == 13)
            obj.Create_Node('\n', true);
        else if (input == 9 || input == 11)
            obj.Pop_Stack();
        else if (input == 62)
            obj.Redo_Pop();
        else if (input == 60)
            obj.Highlight_Word();
        else if (input == 96)
        {
            obj.Display_List();
            Print_Horizontal_Line();
            obj.Find_Word();
            system("cls");
        }
        else if (input == 35)
        {
            obj.Display_List();
            Print_Horizontal_Line();
            obj.Replace_Word();
            system("cls");
        }
        else if (input == 37)
            Change_Font_Color();
        else if (input == 27)
        {
            return;
        }
        else
            obj.Create_Node(input, true);
        obj.Display_List();
    }
}
void Print_Instructions()
{
    cout << endl;
    cout << setw(50) << "NOTEPAD C++" << endl;
    cout << setw(14) << " "
        << "Press Enter to Open Notepad" << endl
        << setw(14) << " "
        << "Press Esc to Exit Notepad" << endl;
    Print_Horizontal_Line();
    cout << setw(50) << "Important Keys" << endl << endl
        << setw(9) << " " << left << setw(60) << "Find a Word" << left << setw(30) << "Press ` (Key under ESC)" << endl
        << setw(9) << " " << left << setw(60) << "Undo your Action" << left << setw(30) << "Press TAB" << endl
        << setw(9) << " " << left << setw(60) << "Redo your Action" << left << setw(30) << "Press >" << endl
        << setw(9) << " " << left << setw(60) << "Highlight a Word" << left << setw(30) << "Press <" << endl
        << setw(9) << " " << left << setw(60) << "Replace a Word" << left << setw(30) << "Press #" << endl
        << setw(9) << " " << left << setw(60) << "Delete a Word" << left << setw(30) << "Press BACKSPACE" << endl
        << setw(9) << " " << left << setw(60) << "Insert a Space" << left << setw(30) << "Press Forward Space" << endl
        << setw(9) << " " << left << setw(60) << "Change Font Size" << left << setw(30) << "Press %" << endl
        << setw(9) << " " << left << setw(60) << "Return to Menu" << left << setw(30) << "Press ESC" << endl
        << endl << endl;
}
node** resize(node** p, int& size)
{
    node** temp = new node * [size + 1];
    for (int i = 0; i < size; i++)
        temp[i] = p[i];
    size++;
    delete[]p;
    return temp;
}
Stack* resize(Stack* ptr, int& size)
{
    Stack* temp = new Stack[size + 1];
    for (int i = 0; i < size; i++)
        temp[i] = ptr[i];
    size++;
    delete[]ptr;
    return temp;
}
void Change_Font_Color()
{
    system("cls");
    cout << endl << setw(50) << "Pick your Font Colour";
    Print_Horizontal_Line();
    HANDLE  hConsole;
    int x;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << right << setw(20) << "Colour Number" << setw(50) << "Random Text" << endl << endl;
    for (x = 1; x < 14; x++)
    {
        SetConsoleTextAttribute(hConsole, x);
        cout << right << setw(20) << x << setw(50) << "Hello World" << endl;
    }
    SetConsoleTextAttribute(hConsole, k);
    Print_Horizontal_Line();
    cout << "Your choice: ";
    cin >> x;
    while (x > 14 || x < 1)
    {
        cout << "Invalid choice. Please enter again: ";
        cin >> x;
    }
    cin.ignore();
    k = x;
    cout << "Color changed successfully" << endl
        << "Press Enter to Continue....";
    getchar();
    system("cls");
}
void Print_Horizontal_Line()
{
    string a(75, '-');
    cout << endl << endl << a << endl << endl;
}
