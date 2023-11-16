#pragma once
#include<iostream>
#include<Windows.h>
#include <conio.h>
#include <vector>
#include <xkeycheck.h>
#include "Ships.h"

#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 30



class DataInput {
public:
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition = {};

    
	void gotoxy(int x, int y);
	void CheckPoint(int x, int y);


};

class Player {
private:
	COORD Base_Point;

protected:
	struct Coord {
		int X;
		int Y;
		bool Crash = false;
	};
	std::vector<Coord>Ship_Coords;
public:
	Player(int X, int Y);
	~Player();
	COORD Get_Base_Point() { return Base_Point; }

};

class Menu :public DataInput {
private:
	bool PRK1 = false;
	bool PRK2 = false;
	bool InCoord1 = true;
	bool InCoord2 = false;
	
public:
	
	void inputData();

};



class Border_Play :public DataInput
{
public:
	friend COORD Get_Base_Point();
	void ShowBorder();
	void Border_1();
	void Border_2();
	void Plean();


};
