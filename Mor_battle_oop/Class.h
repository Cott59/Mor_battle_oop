#pragma once
#include<iostream>
#include<Windows.h>
#include <conio.h>
#include <vector>
//#include <xkeycheck.h>
#include "Ships.h"

#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 30

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition = {};

class DataInput {
public:
	/*HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition = {};*/

    
	void gotoxy(int x, int y);
	void CheckPoint(int x, int y);


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

struct Coord {
	int X;
	int Y;
	bool Crash = false;
};

class Player:public DataInput
{
private:
	
protected:
	COORD Base_Point{ 0,0 };
	std::vector<Coord>Ship_Coords;
public:
	Player(int X, int Y);
	Player();
	~Player();
	COORD Get_Base_Point() { return Base_Point; };
	void Border_1();
};


class Border_Play : public Player //public DataInput
{
private:
	
public:
	Border_Play();
	void ShowBorder();
	friend void Border_1();
	//void Border_2();
	//void Plean();
	    ////void gotoxy(int x, int y);// override;

};


class Position_Ship
{
public:
	bool Plain[11][11] = { false };
	void ShowBorder();


};