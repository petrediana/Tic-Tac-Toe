#include <bits/stdc++.h>
#include <conio.h>
#include <iomanip>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;

void Show_Matrix()
{
	system("cls");
    cout<<"Two players: Tic Tac Toe"<<endl;
    cout<<endl;
    int i,j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout <<setw(4)<<matrix[i][j];// << " ";
		}
		cout << endl;
	}
	cout<<endl;
}

void Input()
{
	int a;
	cout << "'" << player << "' turn. " <<"Choose your position: ";
	cin >> a;

	if (a == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 4)
	{
		if (matrix[1][0] == '4')
			matrix[1][0] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}
	else if (a == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
		{
			cout << "Position is occupied!" << endl;
			cout<<endl;
			Input();
		}
	}

}
void Change_Players()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win_Combination()
{
	/// win combinations for X
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	/// win combinations for O
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return -1;
}
int main()
{
	n = 0;
	Show_Matrix();
	while (1)
	{
		n++;
		Input();
		Show_Matrix();
		if (Win_Combination() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win_Combination() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		else if (Win_Combination()<0 && n == 9)
		{
			cout << "Draw, nobody wins!" << endl;
			break;
		}
		Change_Players();
	}
	cout<<endl;
	system("pause");
	return 0;
}
