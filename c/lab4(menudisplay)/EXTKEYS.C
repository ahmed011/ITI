/********** A program to display the ASCII representation normal
			& extended keys										 ********/
#include<stdio.h>
#include<conio.h>

void main (void){
	char ch;
	clrscr();
	printf("press any key please\n");
	ch = getch();
	if (ch != NULL)	printf("It is a normal key with code: %d", ch);
	else{
		ch = getch();
		printf("it's an extended key with code of second byte : %d", ch);
	}
	getch();
}
