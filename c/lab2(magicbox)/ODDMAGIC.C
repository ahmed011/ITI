#include<stdio.h>
#include<conio.h>

void main (void){
	int N, col, row, counter, dx, dy;

	clrscr();
	do{
	scanf("%d",&N);
	if(N%2 == 0)	printf("enter odd number");
		}while(N%2 == 0);
	//else{
	dx= 80/(N+1);	dy = 25/(N+1);
	row = 0;
	col = N/2;
	//gotoxy((col+1)*dx,(row+1)*dy);
	//printf("1");
	for (counter = 1; counter <=(N*N); counter++){

	gotoxy ((col+1)*dx,(row+1)*dy);
		printf("%d", counter);
		if(counter % N != 0){
			col--;
			if (col < 0)	col = N-1;
			row--;
			if (row < 0)	row = N-1;
		}
		else{
			row++;
			if(row > N-1)	row = 0;
		}

	//}//else
	}
	getch();
}