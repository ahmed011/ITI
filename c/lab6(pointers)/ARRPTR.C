/**	LAB6.2 Program that takes array of 5 integers using pointers then
		   display its content using pointers **/
#include<stdio.h>

void main (void){
	int arr[6];
	int *ptr;
	int i;
	ptr = arr;
	clrscr();
	for(i = 0; i < 5; i++){ //for loop takes 5 inputs using pointers
		printf("Enter %d number: ", i+1);
		scanf("%d",&ptr[i]);
	}
	printf("your array is\n");
	for(i = 0; i < 5; i++){//for loop displays the same input array
		printf("%d\n",*(ptr+i));
	}
	getch();
}