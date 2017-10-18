/** LAB4.5: Program that takes 5 First names and last names from the user
		   then displays them concatenated use (strcpy,strcat,puts,gets)**/
#include<stdio.h>
#include<conio.h>

void main (void){
	int i, j;
	char first[3][8], last[3][8];
	char full[3][20];
	clrscr();
/************** Taking 5 First Names **************/
	for(i = 0; i <3; i++){
		printf("%d)First Name: ", i+1);
		scanf("%s",&first[i]);
	}
/************** Taking 5 Last Names **************/
	for(j = 0; j <3; j++){
		printf("%d)Last Name: ", j+1);
		scanf("%s",&last[j]);
	}
/************** Printing Full Names **************/
	for(i = 0; i <3; i++){
		strcpy(full[i], first[i]);
		strcat(full[i], " ");
		strcat(full[i],last[i]);
		printf("%d)Full Name is: %s\n",i, full[i]);
	}
	getch();
}