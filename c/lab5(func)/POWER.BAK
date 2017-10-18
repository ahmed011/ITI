/** LAB 5.3: Program that takes a number and power then calculates it **/
#include <stdio.h>

int pw (int number, int power);

void main (void){
	int x, y;
	clrscr();
	printf("kindly insert the number: ");
	scanf ("%d", &x);
	printf("\nInsert the power to %d: ", x);
	scanf("%d", &y);
	printf("%d", pw(x,y));
	getch();
}
int pw (int number, int power){
   if (power == 1)	return number;
   return number*pw(number, power-1);
}