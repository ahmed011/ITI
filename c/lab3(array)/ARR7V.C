#include<stdio.h>

void main (void){
	int i, x;
	int arr [6];
	clrscr();        //Clears screen
	for (i = 0; i <= 6; i++)        // Takes 7 inputs from user
		scanf("%d", &arr[i]);
	for (x = 6; x >= 0; x--)        // reverts the 7 inputs
		printf("%d\n",arr[x]);
	getch();                        // END
}