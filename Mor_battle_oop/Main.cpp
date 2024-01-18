#include<iostream>
#include"Class.h"



int main() {
	setlocale(LC_ALL, "Russian");
	HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD maxWindow = { SCREEN_WIDTH,SCREEN_HEIGHT }; //GetLargestConsoleWindowSize(out_handle);  размер самого большого возможного консольного окна
	SMALL_RECT srctWindow = { 0, 0, maxWindow.X - 1, maxWindow.Y - 1 };
	SMALL_RECT minWindow = { 0, 0,0, 0 };
	SetConsoleWindowInfo(out_handle, true, &minWindow);
	SetConsoleScreenBufferSize(out_handle, maxWindow);
	SetConsoleWindowInfo(out_handle, true, &srctWindow);

	Player player_1(8, 7);
	Player player_2(42,7);
	
	player_1.Border_1();

	
	




	_getch();
	return 0;
}