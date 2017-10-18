/** LAB4.5 Program that take a values of 5 employees in an array
		   of struct**/
#include <stdio.h>
#include <conio.h>

struct employee{
	int id;
	char name[51];
	int age;
	float salary, deduction, bonus;
};

void main (void){
	struct employee emp[2];
	int i, tempAge;
	float tempSalary, tempDeduction, netSalary
		, tempBonus;
	clrscr();
	flushall();
	for(i = 0; i < 2; i++){
		printf("info for employee %d\: ", i+1);
		printf("\nName: ");
		printf("\nAge: ");
		printf("\nSalary: ");
		gotoxy(25,2);
		printf("Deduction: ");
		gotoxy(25,3);
		printf("Bonus: ");
		gotoxy(7, 2);
		flushall();
		gets(emp[i].name);
		gotoxy(5,3);
		flushall();
		scanf("%f",&tempSalary);
		emp[i].salary = tempSalary;
		gotoxy(8,4);
		scanf("%d",&tempAge);
		emp[i].age = tempAge;
		gotoxy(36,2);
		scanf("%d",&tempDeduction);
		emp[i].deduction = tempDeduction;
		gotoxy(31,3);
		scanf("%d", tempBonus);
		emp[i].bonus = tempBonus;
		clrscr();
	}
		for(i = 0; i < 2; i++){
		printf("Employee %d: ", i+1);
		printf("\nName: ");
		puts(emp[i].name);//Prints the NAME
		printf("\nAge: ");
		emp[i].age = tempAge;
		printf("%d",&tempAge); //Prints the AGEE
		printf("\nNetSalary: ");
		emp[i].salary = netSalary;
		printf("%0.2f",&netSalary); //Pints net Salary
		printf("\n");
	}
	getch();
}