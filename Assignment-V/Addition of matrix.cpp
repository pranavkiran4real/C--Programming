#include<stdio.h>
int main()
{
	int row1,column1,row2,column2;
	int i,j;
	int a[10][10], b[10][10], c[10][10];
	
	printf("Please enter the number of rows for Matrix A: ");
	scanf("%d",&row1);
	printf("Please enter the number of columns for Matrix A: ");
	scanf("%d",&column1);
	printf("Please enter the number of rows for Matrix B: ");
	scanf("%d",&row2);
	printf("Please enter the number of columns for Matrix B: ");
	scanf("%d",&column2);

	if (row1 != row2 || column1 != column2) {	
		printf("Sorry....Matrices cannot be added. Please give a valid Matrix!\n");
		return 0;
	}

	for(i=0;i<row1;i++) {
		for(j=0;j<column1;j++) {
			printf("Please enter value for a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}	

	for(i=0;i<row2;i++)
	 {
		for(j=0;j<column2;j++) 
		{
			printf("Please enter value for b[%d][%d]: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}	
	

	for(i=0;i<row1;i++)
	{  
		for(j=0;j<column1;j++) 
		{
			c[i][j] = a[i][j] + b[i][j]; 
		}	
	}	
	
	printf("\nThe addition of the two matrices is: \n\n");

	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++) 
		{
			printf("%d ",c[i][j]); 
		}
		printf("\n");
	}
	

	return 0;	
	
}
