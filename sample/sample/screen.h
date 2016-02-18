#pragma once

class screen {
	private: 
		int	horizontal;
		int vertical;
	public:
		void init();	//initialize width and height 
		void gotoxy(int x,int y);	//jump to point on screen
};