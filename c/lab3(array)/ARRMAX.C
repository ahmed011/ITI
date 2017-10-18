#include<stdio.h>

void main (void){
	int arr[9];
	int i, x, max, min;
	max = 0;
	min = 0;
	clrscr();
	for(i = 0; i <=9 ; i++)  //Takes 10 inputs from the user
		scanf("%d", &arr[i]);
	for(x = 0; x <=9 ; x++)  //rolls across the values to find max number
		if (max <= arr[x])	max = arr[x];
	printf("Maximum Number is: %d\n", max);
	for(x = 0; x <=9; x++)	//rolls acrros the values to find min number
		if (min >= arr[x])	min = arr[x];
	printf("Minimum Number is: %d\n", min);
	getch();
}