#include "Ships.h"
#include<iostream>
#include"Class.h"
//#include<Windows.h>

//
//
//bool battleships::CreatePosition()
//{
//	int x = 0, y = 0;
//	CheckPoint(x, y);
//	//gotoxy(x, y);
//	while (1) {
//
//		P1.X = x;
//		P1.Y = y;
//		if (Position == true) {
//			P2.X = x + 1, P3.X = x + 2, P4.X = x + 3;
//			P2.Y = P3.Y = P4.Y = y;
//		}
//		else {
//			P2.Y = y + 1, P3.Y = y + 2, P4.Y = y + 3;
//			P2.X = P3.X = P4.X = x;
//		}
//
//		Ship();
//		//system("cls");
//		if (_kbhit()) {
//			char ch = _getch();
//			if (ch == 80)
//				y++;
//			else
//				if (ch == 72)
//					y--;
//				else
//					if (ch == 75)
//						x--;
//					else
//						if (ch == 77)
//							x++;
//						else
//							if (ch == 8)
//								Position = 1;
//							else
//								if (ch == 28)
//									exit(1);
//
//		}
//
//		Sleep(50);
//		system("cls");
//
//	}
//
//
//
//
//
//	return 1;
//}
//
//void battleships::Ship()
//{
//	gotoxy(P1.X, P1.Y); std::cout << 'X';
//	gotoxy(P2.X, P2.Y); std::cout << 'X';
//	gotoxy(P3.X, P3.Y); std::cout << 'X';
//	gotoxy(P4.X, P4.Y); std::cout << 'X';
//}

//HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
//COORD CursorPosition;



void Ships::gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
	
}

Kater::Kater(int X, int Y)
{
	Temp.X = X; Temp.Y = Y;
}

void Kater::ShowShip()
{
	gotoXY(P1.X, P1.Y); std::cout << 'X';
}

void Destroyer::ShowShip()
{
	gotoXY(P1.X, P1.Y); std::cout << 'X';
	gotoXY(P2.X, P2.Y); std::cout << 'X';
}


