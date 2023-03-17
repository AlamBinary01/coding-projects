#include <iostream>
#include <windows.h>
#include <string>
#include <stack>
using namespace std;

class infix_To_Post
{
public:

	//Precidence
	int precidence(char c)
	{
		if (c == '~')
		{
			return 4;
		}
		else if (c == '*')
		{
			return 3;
		}
		else if (c == '+')
		{
			return 2;
		}

		else
		{
			return -1;
		}
	}
	//Conversion
	string infix_to_post(string data)
	{
		stack<char> st; string result;
		for (int i = 0; i < data.length(); i++)
		{
			char c = data[i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' &&
				c <= '9'))
			{
				result = result + c;
			}
			else if (c == '(')
			{
				st.push('(');
			}
			else if (c == ')')
			{
				while (st.top() != '(')
				{
					result = result + st.top();
					st.pop();
				}
				st.pop();
			}
			else
			{
				while (!st.empty() && precidence(data[i]) <=
					precidence(st.top()))
				{
					result = result + st.top();
					st.pop();
				}
				st.push(c);
			}
		}
		while (!st.empty())
		{
			result = result + st.top();
			st.pop();
		}
		cout << endl << "Expression is : " << result << endl;
		return result;
	}

};
bool checkop(string exp, int i)
{
	if ((exp[i] == '~') || (exp[i] == '*') || (exp[i] == '(') || (exp[i] == ')') || (exp[i] == '+'))
	{
		return true;

	}
	else
		return false;
}
int evaluation(string exp)
{

	string s;
	infix_To_Post obj;
	s = obj.infix_to_post(exp);
	stack <int> st1;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			st1.push(s[i]);
		}
		else
		{
			int op2 = st1.top();
			st1.pop();
			int op1 = st1.top();
			st1.pop();

			switch (s[i])
			{
			case '+':
				st1.push(op1 + op2);
				break;
			case '*':
				st1.push(op1 * op2);
				break;
			case '~':
				st1.push(~op1);
				break;
			default:
				break;
			}
		}
		return st1.top();
	}
}
int main()
{

	string exp;
	string exp1;
	stack<char> st;
	int checkalpha = 0;
	int checkoperator = 0;
	int a = 0;
	cout << "enter expression" << endl;
	getline(cin, exp);
	int len = exp.length();
	// check alpahabet
	for (int i = 0; i < len; i++)
	{
		if (isalpha(exp[i]) || checkop(exp, i))
		{
			cout << "" << endl;
		}
		else
		{
			a++;
		}

		if (a != 0)
		{
			cout << "invalid input" << endl;
			Sleep(2000);
			system("cls");
			cout << "enter expression" << endl;
			getline(cin, exp);
		}

	}


	//expersion without operator
	for (int i = 0; i < len; i++)
	{

		if (isalpha(exp[i]))
		{
			exp1 += exp[i];
		}

	}
	string exp2 = "\0";
	int length = exp1.length();
	exp2 += exp1[0];
	int exp2Length = exp2.length();
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < exp2Length; j++)
		{
			if (exp1[i] != exp2[j])
			{
				exp2 += exp1[i];
				break;
			}
		}
	}

	//initialize Table
	int rows = pow(2, exp2.length());
	int cols = exp2.length() + 1;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == matrix[1][1]) {
				matrix[1][1] = 0;
			}
			else
				matrix[i][j] = 1;
		}

	}
	cout << "FILLED" << endl;
	system("cls");
	//Filling Table
	for (int i = 0; i < rows; i++)
	{
		int x = i;
		for (int j = cols - 2; j >= 0; j--)
		{
			matrix[i][j] = (x % 2);
			x = x / 2;
		}
	}
	// print filling table
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	// evalate
	string s;
	infix_To_Post obj;
	s = obj.infix_to_post(exp);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < exp2.length(); k++)
			{
				if (isalpha(s[i]))
				{
					s += to_string(matrix[i][k]);
				}
				else if (checkop(s, i))
				{
					s += s;
				}


			}
		}
		matrix[i][cols - 1] = evaluation(s);
	}

}
