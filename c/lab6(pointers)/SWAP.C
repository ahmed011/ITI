/**	LAB6.1 Program that swaps two values using pointers, and functions **/
#include<stdio.h>

void swap(int *x, int *y);

void main (void){
	int a, b;
	clrscr();
	printf("Kindly enter two numbers to be swapped,\nFirst number a=  ");
	scanf("%d",&a);
	printf("Second Number b= ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("Swapping...\n");
	printf("a= %d, b= %d", a, b);
	getch();
}
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
