#include<stdio.h>
void main (void){
	char choice;
	clrscr();
	printf("kindly enter your choice : \na b or c \n");
	scanf("%c",&choice);
	switch(choice){
		case 'a':
			printf("your choice is A");
			break;
		case 'b':
			printf("your choice is B");
			break;
		case 'c':
			printf("your choice is C");
			break;
		default:
			printf("Invalid Choice !");
			break;
		}
	getch();
[}