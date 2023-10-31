#include"Class.h"
#include<iostream>
#include<Windows.h>
#include <conio.h>
#include <algorithm>
#include <iterator>

Player::Player()
{
	
}

Player::~Player()
{
}

bool Player::Search_Coord(Coord& coord)
{
	for (auto i = Ship_Coords.begin(); i = Ship_Coords.end(); ++i)
		if (Ship_Coords[i] == coord)
			return true;
		else
			return false;
}

void Player::Fire_Coord(Coord& coord)
{
	for (auto i = Ship_Coords.begin(); i = Ship_Coords.end(); ++i)
		if (Ship_Coords[i] == coord)
			Ship_Coords[i].Crash = true;
}

bool Player::operator==(Coord op2)
{
	if (Player::Coord.)
	return false;
}






void Menu::inputData()
{
	
		system("cls");
		gotoxy(10, 5); std::cout << " -------------------------- ";
		gotoxy(10, 6);  std::cout << " |        Player 1         | ";
		gotoxy(10, 7);  std::cout << " --------------------------";
		gotoxy(10, 9);  std::cout << "    расстановка кораблей   ";
		gotoxy(10, 10); std::cout << "1. Автоматическая";
		gotoxy(10, 11); std::cout << "2. Ручная";
		gotoxy(10, 13);  std::cout << "Select option: ";
		char ch = _getche();

		if (ch == '1')
			PRK1 = false;
		else 
			if(ch == '2')
				PRK1 = true;
		
	
		system("cls");
		gotoxy(10, 5); std::cout << " -------------------------- ";
		gotoxy(10, 6);  std::cout << " |        Player 2         | ";
		gotoxy(10, 7);  std::cout << " --------------------------";
		gotoxy(10, 9);  std::cout << "    Выбор противника   ";
		gotoxy(10, 10); std::cout << "1. Компьютер";
		gotoxy(10, 11); std::cout << "2. Игрок";
		gotoxy(10, 13);  std::cout << "Select option: ";
		ch = _getche();

		if (ch == '1')
			PRK2 = false, InCoord2 = false;
		else
			if (ch == '2') {
				gotoxy(10, 9);  std::cout << "    расстановка кораблей   ";
				gotoxy(10, 10); std::cout << "1. Автоматическая";
				gotoxy(10, 11); std::cout << "2. Ручная";
				ch = _getche();
				if (ch == '1')
					PRK2 = false;
				else
					if (ch == '2')
						PRK2 = true;

			}
				



		system("cls");

}

void DataInput::gotoxy(int x, int y) {
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
void DataInput::CheckPoint(int x, int y)
{
}

bool battleships::CreatePosition()
{
	int x = 0, y = 0;
	CheckPoint(x, y);
	//gotoxy(x, y);
	while (1) {
		
		P1.X = x;
		P1.Y = y;
		if (Position == true) {
			P2.X = x + 1, P3.X = x + 2, P4.X = x + 3;
			P2.Y = P3.Y = P4.Y = y;
		}
		else {
			P2.Y = y + 1, P3.Y = y + 2, P4.Y = y + 3;
			P2.X = P3.X = P4.X = x;
		}

		Ship();
		//system("cls");
		if (_kbhit()) {
			char ch = _getch();
			if (ch == 80)
				y++;
			else
				if (ch == 72)
					y--;
				else
					if (ch == 75)
						x--;
					else
						if (ch == 77)
							x++;
						else
							if (ch == 8)
								Position = 1;
							else
								if (ch == 28)
									exit(1);
									
		}

		Sleep(50);
		system("cls");

	}





	return 1;
}

void battleships::Ship()
{
	gotoxy(P1.X, P1.Y); std::cout << 'X';
	gotoxy(P2.X, P2.Y); std::cout << 'X';
	gotoxy(P3.X, P3.Y); std::cout << 'X';
	gotoxy(P4.X, P4.Y); std::cout << 'X';
}
