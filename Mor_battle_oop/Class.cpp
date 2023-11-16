#include"Class.h"
#include<iostream>
#include<Windows.h>
#include <conio.h>
#include <algorithm>
#include <iterator>

Player::Player(int X, int Y)
{
	Base_Point.X = X, Base_Point.Y = Y;
}

Player::~Player()
{
}

//bool Player::Search_Coord(Coord& coord)
//{
//	for (auto i = Ship_Coords.begin(); i = Ship_Coords.end(); ++i)
//		if (Ship_Coords[i] == coord)
//			return true;
//		else
//			return false;
//}
//
//void Player::Fire_Coord(Coord& coord)
//{
//	for (auto i = Ship_Coords.begin(); i = Ship_Coords.end(); ++i)
//		if (Ship_Coords[i] == coord)
//			Ship_Coords[i].Crash = true;
//}
//
//bool Player::operator==(Coord op2)
//{
//	if ((Player::Coord::X = op2.X) && (Player::Coord::Y = op2.Y))
//		return true;
//	else
//		return false;
//	
//}


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

void Border_Play::ShowBorder()
{
	for (int i = 0; i < SCREEN_HEIGHT - 10; i++) {
		for (int j = 0; j < 5; j++) {

			gotoxy(0 + j, i); std::cout << "#";
			gotoxy(34 + j, i); std::cout << "#";
			gotoxy(68 + j, i); std::cout << "#";
			
		}
	}

	for (int i = 0; i < SCREEN_HEIGHT - 10; i++) {
		for (int j = SCREEN_WIDTH - 1; j > SCREEN_WIDTH - 6; j--) {
			gotoxy(0 + j, i); std::cout << "#";
		}
	}

	for (int j = 0; j < SCREEN_WIDTH - 1; j++) {
		gotoxy(j, 0); std::cout << "#";
	}
	for (int j = 0; j < SCREEN_WIDTH - 1; j++) {
		gotoxy(j, 1); std::cout << "#";
	}
	for (int j = 0; j < SCREEN_WIDTH - 1; j++) {
		gotoxy(j, 5); std::cout << "#";
	}
	for (int j = 0; j < SCREEN_WIDTH - 1; j++) {
		gotoxy(j, 19); std::cout << "#";
	}
	gotoxy(15, 3); std::cout << "PLAYER 1";
	gotoxy(49, 3); std::cout << "PLAYER 2";

}



void Border_Play::Border_1() {
	gotoxy(Bp.X + 1, Bp.Y);
	for (int i = 1; i < 11; i++)
		std::cout << ' ' << i;
}

void Border_Play::Border_2()
{
	for (int j = 1; j < 11; j++) {
		gotoxy(Bp.X, Bp.Y + j);
		switch (j) {
		case 1: std::cout << 'A'; break;
		case 2: std::cout << 'B'; break;
		case 3: std::cout << 'C'; break;
		case 4: std::cout << 'D'; break;
		case 5: std::cout << 'E'; break;
		case 6: std::cout << 'F'; break;
		case 7: std::cout << 'G'; break;
		case 8: std::cout << 'H'; break;
		case 9: std::cout << 'I'; break;
		case 10: std::cout << 'J'; break;
		}
	}
}

void Border_Play::Plean() {
	for (int y = 1; y <= 10; y++) {
		for (int x = 1; x <= 10; x++) {
			COORD temp = { (SHORT)x,(SHORT)y };
			gotoxy(Base_Point.X + 1, Base_Point.Y + y);
			for (int i = 1; i < 11; i++)
				std::cout << " .";
		}
	}
}

COORD Get_Base_Point()
{
	return COORD Base_P;
}
