#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <random>
#include <conio.h>
#include <ctime>
#define KB_UP 72
#define KB_DOWN 80
#define KB_LEFT 75
#define KB_RIGHT 77
#define KB_ESCAPE 27
using namespace std;
void mainMenu();
void Game();
void InitializeBoard();
void PrintBoard();
//srand(time(NULL)); //must be before int randomnumber
//int randomNumber = rand() / 3 * 12 ^ 2 / 50 % 101;
//cout << randomNumber << endl;
char board[10][10] = { "x" };

void main()
{
	mainMenu();


}

void mainMenu()
{
	int UserInput = 0;
	cout << "Main Menu" << endl << "1. Start Gane" << endl << "2. Instructions" << endl << "3. Quit" << endl; 


	while (UserInput != 3) 
	{
		cin >> UserInput;
		switch (UserInput)
		{
		case 1:
			cout << "Game Start!" << endl;
			Game();
			break;
		case 2:
			cout << "The objective of the game is to get the number 2048 using additions of the number two and its multiples. You will have a grid of 16 tiles. Two numbers will be given: usually two number twos, maybe number four. Move up or down, left or right trying to join two equal numbers. When two equal numbers are in touch, they will add up. If we are run out of equal numbers on our grid, or we can not put them in touch, the game will provide us another two or a four so we can keep on playing. If there are no free tiles on our grid, the game ends. By adding numbers, we get higher numbers and we can approach to 2048, which is the goal of the game." << endl;

			break;
		case 3:
			cout << "Exit game" << endl;
			break;
		default:
			cout << "Please choose option 1, 2, or 3" << endl;
			break;
		}
	}

}
void Game()
{
	int x = 5;
	int y = 5;
	cout << "wow m8 so gr8 I rate 8/8 would calculate again - IGN" << endl;
	board[4][4] = 'O';
	PrintBoard();
	int KB_code = 0;
	while (KB_code != KB_ESCAPE)
	{
		if (kbhit())
		{
			KB_code = getch();
			switch (KB_code)
			{
			case KB_LEFT:
				cout << "LEFT" << endl;
				if (y != 1) {
					board[x][y] = ' ';
					y--;
					board[x][y] = 'O';
					PrintBoard();
				}
				break;

			case KB_RIGHT:
				cout << "RIGHT" << endl;
				if (y != 8) {
					board[x][y] = ' ';
					y++;
					board[x][y] = 'O';
					PrintBoard();
				}
					break;
			case KB_UP:
				cout << "UP" << endl;
				if (x != 1) {
					board[x][y] = ' ';
					x--;
					board[x][y] = 'O';
					PrintBoard();
				}
				break;
			case KB_DOWN:
				cout << "DOWN" << endl;
				if (x != 8) {
					board[x][y] = ' ';
					x++;
					board[x][y] = 'O';
					PrintBoard();
				}
			}
		}
	}
	
}
void InitializeBoard()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (x = 0 || x == 9)
			{
				board[x][y] = 'x';
			}
			if (y = 0 || y == 9)
			{
				board[x][y] = 'x';
			}
		}
	}
}
void PrintBoard()
{
	system("cls");
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			cout << board[x][y] << " ";
		}
		cout << endl;
	}

}
