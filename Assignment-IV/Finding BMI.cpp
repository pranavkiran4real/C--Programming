//Program by:Pranav Kiran(BE CSE)
//Register number:715520104036
#include<stdio.h>
int main()
{
	printf("\n****************************************************");
	printf("\nProgram Output Performed by: Pranav Kiran S (BE CSE)");
	printf("\n****************************************************");
	int noi, i;
	float ind[10][10],bmi;
	printf("\nEnter the number of Individuals:\n");
	scanf("%d",&noi);
	printf("Please enter Height in Meters and Weight in Kilograms\n");
	for(i=0;i<noi;i++) 
	{
		printf("Enter the Height of Person %d: ",i+1);
		scanf("%f",&ind[i][0]);
		printf("Enter the Weight of Person %d: ",i+1);
		scanf("%f",&ind[i][1]);
	}
	printf("\n\nThe Body Mass Indexes of the inviduals are as follows:\n");
	for(i=0;i<noi;i++)
	{
		bmi = ind[i][1] / (ind[i][0]*ind[i][0]);
		printf("Body Mass Index of Person %d is : %5.2f\n",i+1,bmi);
	}
	return 0;
}
