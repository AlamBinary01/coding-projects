#include<iostream>
#include<string>
#include <conio.h>
using namespace std;
// upmove drops the array "UP" meaning that all the numbers will shift towards up 
// and the same digits will combine to form a new number
void upmove(int a[4][4])
{
	int i, j, li, ri;
	for (j = 0; j < 4; j++)
	{
		li = 0, ri = j;
		for (i = 1; i < 4; i++)
		{
			if (a[i][j] != 0)
			{
				if (a[i - 1][j] == 0 || a[i - 1][j] == a[i][j])
				{
					if (a[li][ri] == a[i][j])
					{
						a[li][ri] *= 2;
						a[i][j] = 0;
					}
					else
					{
						if (a[li][ri] == 0)
						{
							a[li][ri] = a[i][j];
							a[i][j] = 0;
						}
						else
						{
							a[++li][ri] = a[i][j];
							a[i][j] = 0;
						}
					}
				}
				else li++;
			}
		}
	}
}

// downmoves drops the array "DOWN" meaning that all the numbers will shift towards down 
// and the same digits will combine to form a new number
void downmove(int a[4][4])
{
	int i, j, li, ri;
	for (j = 0; j < 4; j++)
	{
		li = 3, ri = j;
		for (i = 2; i >= 0; i--)
		{
			if (a[i][j] != 0)
			{
				if (a[i + 1][j] == 0 || a[i + 1][j] == a[i][j])
				{
					if (a[li][ri] == a[i][j])
					{
						a[li][ri] *= 2;
						a[i][j] = 0;
					}
					else
					{
						if (a[li][ri] == 0)
						{
							a[li][ri] = a[i][j];
							a[i][j] = 0;
						}
						else
						{
							a[--li][ri] = a[i][j];
							a[i][j] = 0;
						}
					}
				}
				else li--;
			}
		}
	}
}

// leftmoves the array "left" meaning that all the numbers will shift towards left
// and the same digits will combine to form a new number
void leftmove(int a[4][4])
{
	int i, j, li, ri;
	for (i = 0; i < 4; i++)
	{
		li = i, ri = 0;
		for (j = 1; j < 4; j++)
		{
			if (a[i][j] != 0)
			{
				if (a[i][j - 1] == 0 || a[i][j - 1] == a[i][j])
				{
					if (a[li][ri] == a[i][j])
					{
						a[li][ri] *= 2;
						a[i][j] = 0;
					}
					else
					{
						if (a[li][ri] == 0)
						{
							a[li][ri] = a[i][j];
							a[i][j] = 0;
						}
						else
						{
							a[li][++ri] = a[i][j];
							a[i][j] = 0;
						}
					}
				}
				else ri++;
			}
		}
	}
}

// rightmoves the array "right" meaning that all the numbers will shift towards right 
// and the same digits will combine to form a new number
void rightmove(int a[4][4])
{
	int i, j, li, ri;
	for (i = 0; i < 4; i++)
	{
		li = i, ri = 3;
		for (j = 2; j >= 0; j--)
		{
			if (a[i][j] != 0)
			{
				if (a[i][j + 1] == 0 || a[i][j + 1] == a[i][j])
				{
					if (a[li][ri] == a[i][j])
					{
						a[li][ri] *= 2;
						a[i][j] = 0;
					}
					else
					{
						if (a[li][ri] == 0)
						{
							a[li][ri] = a[i][j];
							a[i][j] = 0;
						}
						else
						{
							a[li][--ri] = a[i][j];
							a[i][j] = 0;
						}
					}
				}
				else ri--;
			}
		}
	}
}


// addblock is a function that randomly generates a multiple of 2 
//when there are different number on screen
void addblock(int a[4][4])
{
	int li, ri;
	srand(time(0));
	while (1)
	{
		li = rand() % 4;
		ri = rand() % 4;
		if (a[li][ri] == 0)
		{
			a[li][ri] = pow(2, li % 2 + 1);
			break;
		}
	}

}

// this is the menu of the main game the 4x4 board that is shown to the user 
void disp(int a[4][4])
{
	cout << "\n\t\tPress Esc anytime to quit the game";
	cout << "\n\n\n\n";
	int i, j;
	for (i = 0; i < 4; i++)
	{
		cout << "\t\t\t\t-----------------\n\t\t\t\t";
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == 0) cout << "|   ";
			else
				cout << "| " << a[i][j] << " ";
		}
		cout << "|" << endl;
	}
	cout << "\t\t\t\t-----------------\n";
}
m
// check functions compares array after (array) and before (initial array copy) playing the game 
int compare_board_before_after(int tmp[4][4], int a[4][4])
{
	int fl = 1, i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (tmp[i][j] != a[i][j])
			{
				fl = 0;
				break;
			}
	return fl;
}

// this function checks for digits that are in the row and column 
// if the board is full then game is over
int empty_space_on_board(int a[4][4])
{
	int fl = 0, gl = 0, i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] == 0)
			{
				fl = 1;
				break;
			}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			if (a[i + 1][j] == a[i][j] || a[i][j + 1] == a[i][j])
			{
				gl = 1;
				break;
			}

	if (fl || gl) return 1;
	else return 0;
}

int main()
{
	cout << "\n\n\n\n\t\t\t2048 GAME\n\n\n\t\tPress any key to continue";
	_getch();
	system("cls");
	int i1, i2, i3, i4, i, j;
	int arrayy[4][4] = { 0 }, arrayy_initial_copy[4][4] = { 0 };
	srand(time(0));
	i1 = rand() % 4;
	i2 = rand() % 4;
	//while (1)
	//{
	//	
	//	if (i3 != i1 && i4 != i2) break;
	//}
	i3 = rand() % 4;
	i4 = rand() % 4;
	arrayy[i1][i2] = 2;
	arrayy[i3][i4] = 4;
	disp(arrayy);

	int ch;
	while (1)
	{
		for (i = 0; i < 4; i++)
			for (j = 0; j < 4; j++)
				arrayy_initial_copy[i][j] = arrayy[i][j];  //copying the orignal generated array into a temp array 
		ch = _getch();                                     // for later comparing 
		system("cls");
		if (ch == 72) upmove(arrayy);
		if (ch == 80) downmove(arrayy);
		if (ch == 75) leftmove(arrayy);
		if (ch == 77) rightmove(arrayy);
		if (ch == 27) break;
		
		if (!compare_board_before_after(arrayy_initial_copy, arrayy))  // if the array has different values at the same place on the board 
			addblock(arrayy);    // addblock replaces generates another number 
		disp(arrayy);

		if (!empty_space_on_board(arrayy))
		{
			cout << "\n\n\t\t\tGAME OVER!!\n\n\n";
			_getch();
			break;
		}
	}
	return 0;
}
