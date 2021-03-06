/***** Write a program that displays a Highlight Menu *****/
#include<stdio.h>
#include<conio.h>
#define upArrow 72
#define downArrow 80
#define pgUp 73
#define pgDown 81
#define Esc 27
#define Enter 13
#define Normal 0x07
#define Highlight 0xb0
void main (void){
	int col = 35, row = 10,i;
	int currentLoc = 0;
	char menu [3][10] = {"New", "Display", "Exit"};
	char ch;
	int terminate = 0;
	clrscr();
	do{
/********** Drawing Menu **********/
	for ( i = 0; i < 3; i++){
		gotoxy(col, row+(2*i));
		if (currentLoc == i)	textattr(Highlight);
		cprintf("%s", menu[i]) ;
		textattr(Normal);
	}
/******* END OF Drawing Menu *******/
		flushall();
		ch = getch(); //get a character from user
		switch(ch){
			case NULL:	// if it was Extended Key with 2 bytes long and starts with a null char
				ch = getch();
				switch (ch){
					case upArrow:
						currentLoc--;
						if(currentLoc < 0)	currentLoc = 2;
						break;
					case downArrow:
						currentLoc++;
						if(currentLoc > 2)	currentLoc = 0;
						break;
					case pgUp:
						currentLoc = 0;
						break;
					case pgDown:
						currentLoc = 2;
						break;
				}
				break;
			case Esc: // if user presees Escape key the program Ends
				terminate = 1;
				break;
			case Enter:	//if user make a choice from the menu
				switch(currentLoc){
					case 0: //New Item
						clrscr();
						printf("This is a New Screen");
						getch();
						break;
					case 1: //Display Item
						clrscr();
						printf("This is a Displayed Item");
						getch();
						break;
					case 2: //Exit Item
						terminate = 1;
				}
		}
	}while(!terminate);
}