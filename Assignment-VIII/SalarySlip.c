#include<stdio.h>

struct employee 
{
	int eno;
    char eName[20];
    char dept[20];
	float basicPay;
	float hra;
	float cca;
	float allowances;
};

void main() {
	struct employee *emPtr, emp[10];
	float totalSalary;
	int i, noe;
	emPtr = emp;
	printf("\Enter the number of employees: ");
	scanf("%d",&noe);
	for(i=0;i<noe;i++) 
	{
		printf("\nEnter Employee Number: ");
		scanf("%d",&emPtr->eno);
		printf("\nEnter Employee Name: ");
		scanf("%s",emPtr->eName);
		printf("\nEnter Employee Department: ");
		scanf("%s",emPtr->dept);
		printf("\nEnter Basic Pay: ");
		scanf("%f",&emPtr->basicPay);
		printf("\nEnter HRA: ");
		scanf("%f",&emPtr->hra);
		printf("\nEnter CCA: ");
		scanf("%f",&emPtr->cca);
		printf("\nEnter Allowances: ");
		scanf("%f",&emPtr->allowances);
		emPtr++;
	}
	emPtr = emp;
	for(i=0;i<noe;i++) 
	{	
		totalSalary = emPtr->basicPay + emPtr->hra + emPtr->cca + emPtr->allowances;
		printf("\n\n\nS A L A R Y     S L I P");
		printf("\nEmployee Number: %d",emPtr->eno);
		printf("\nEmployee Name  : %s",emPtr->eName);
		printf("\nDepartment     : %s",emPtr->dept);
		printf("\nBasic Pay      : %7.2f",emPtr->basicPay);
		printf("\nHRA            : %7.2f",emPtr->hra);
		printf("\nCCA            : %7.2f",emPtr->cca);
		printf("\nAllowances     : %7.2f",emPtr->allowances);
		printf("\nTOTAL SALARY   : %8.2f",totalSalary);
		emPtr++;
	}
}

