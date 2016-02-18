#include <conio.h>
#include "header.h"
#include <stdio.h>

int main() {
	SetDesktopResolution();
	printf("hello world");
	gotoxy(30, 30);
	printf("new position");
	getch();

	return 0;
}