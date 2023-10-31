#pragma once
#include<iostream>
#include<Windows.h>
#include <conio.h>
#include <vector>
#include <xkeycheck.h>

#define SCREEN_WIDTH 50
#define SCREEN_HEIGHT 50


class DataInput {
public:
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition = {};

    
	void gotoxy(int x, int y);
	void CheckPoint(int x, int y);


};


class Player
{
private:
	//bool Parking = false; // false=auto расстановка
	//bool InputCoord = false; // ввод координат 
	std::vector<Coord>Ship_Coords;
protected:
	struct Coord{
		int X;
		int Y;
		bool Crash = false;
	};

public:
	Player();
	~Player();
	bool Search_Coord(Coord& coord);
	void Fire_Coord(Coord& coord);
	bool operator==(Coord op2);

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

class  battleships : public DataInput
{
public:
	bool Position = false;
	Coord P1, P2, P3, P4;

	bool CreatePosition();
	void Ship();
	
	
};


