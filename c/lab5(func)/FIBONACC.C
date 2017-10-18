#include <stdio.h>

int fib (int N);

void main (void){
	int x;
	clrscr();
	printf("Kindly enter the index: ");
	scanf("%d", &x);
	printf("your fibonacci series number index is :%d ", fib(x));
	getch();
}

int fib (int N){
	if (N == 1 || N == 2)	return 1;
	return fib(N-1) + fib (N-2);
}
