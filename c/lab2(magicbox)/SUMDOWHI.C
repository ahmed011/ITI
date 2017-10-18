#include<stdio.h>
#include<conio.h>
void main (void){
	int x;
	int sum = 0;
	clrscr();
	printf("enter the number: ");
	do{
		printf("Sum is : %d\n", sum);
		scanf("%d", &x);
		sum = sum + x;
	}while(sum<100);

	printf("ERROR !!!");
	getch();
}