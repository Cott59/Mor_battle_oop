#pragma once

//
//class  battleships : public DataInput, public Player
//{
//public:
//	bool Position = false;
//	Coord P1, P2, P3, P4;
//
//	bool CreatePosition();
//	void Ship();
//
//
//};

#include<Windows.h>

class Ships
{
private:
public:
	void gotoXY(int x, int y);
	virtual void ShowShip() = 0;


};

class Kater :public Ships //однопалубный
{
private:
	COORD P1{ 0,0 };
	bool Position = false;
protected:
	COORD Temp{ 0,0 };
public:
	Kater(int X, int Y);
	//~Kater();
	void ShowShip() override;
};

class Destroyer :public Kater   //двухпалубный
{
private:
	bool Position = false;
	COORD P1{ 0,0 }, P2{ 0,0 };
public:
	Destroyer(int X, int Y) :Kater(X, Y) {

	}
	void ShowShip() override;
};

class Cruiser :public Kater  //трёхпалубный
{
private:
	bool Position = false;
	COORD P1, P2, P3;
public:
	//Cruiser(int X1, int Y1);
};

class Battleships :public Kater	//четырёхпалубный
{
private:
	bool Position = false;
	COORD P1, P2, P3, P4;
public:
	//Battleships(int X1, int Y1);


};



