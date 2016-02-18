#include <conio.h>
#include "screen.h"
#include <stdio.h>

int main() {
	screen a;
	a.init();
	a.gotoxy(10, 12);
	printf("new line");


	getch();
	return 0;
}