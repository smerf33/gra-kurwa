#include "screen.h"
#include<windows.h>
#include "wtypes.h"

void screen::init()
{
	RECT desktop;		// Get a handle to the desktop window
	const HWND hDesktop = GetDesktopWindow();	// Get the size of screen to the variable desktop
	GetWindowRect(hDesktop, &desktop);
	// The top left corner will have coordinates (0,0)
	// and the bottom right corner will have coordinates
	// (horizontal, vertical)
	horizontal = desktop.right;
	vertical = desktop.bottom;

	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions
	MoveWindow(console, r.left, r.top, horizontal, vertical, TRUE); // 800 width, 100 height
}

void screen::gotoxy(int x,int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
