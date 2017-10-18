/**	LAB3.3 Program that stores the grade of 3 students for 4 subjects
	then calculates 1)Total score for each student
					2)Average score for each subject  **/

#include<stdio.h>
void main(void){
	int arr[3][4]= {0};
	int st, mat, sum;
	float sum1, avg;
	clrscr();
	printf("Enter the grades for each student\n");
	// Taking user input for 3 students, 4subjects each
	for(st = 0; st <=2; st++){
		for(mat = 0; mat <=3; mat++){
			printf("Student:%d Subject:%d:", st+1,mat+1);
			scanf("%d", &arr[st][mat]);
		}
	}
/********************** Starts taking the sum **********************/
	for(st = 0; st <=2; st++){
		sum = 0; // resetting the sum each iteration
		for(mat = 0; mat <=3; mat++){
			sum = sum + arr[st][mat]; //calculates the sum of the 4 Subjects
		}
		printf("Sum for Student:%d = %d\n", st+1, sum);
	}
/********************** Calculating The Average **********************/
	for(mat = 0; mat <=3; mat++){
		sum1 = 0;
		for(st = 0; st <=2; st++){
			sum1 = sum1 + arr[st][mat];
		}
		avg = sum1 / (float)st;
		printf("The average for Subject:%d = %0.2f\n", mat+1, avg);
	}
	getch();
}