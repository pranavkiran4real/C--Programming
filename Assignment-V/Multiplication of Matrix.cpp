#include<stdio.h>
int main()
{
	int row1,column1,row2,column2;
	int i,j,k;
	int a[10][10], b[10][10], c[10][10];
	
	printf("Please enter the number of rows for Matrix A: ");
	scanf("%d",&row1);
	printf("Please enter the number of columns for Matrix A: ");
	scanf("%d",&column1);
	printf("Please enter the number of rows for Matrix B: ");
	scanf("%d",&row2);
	printf("Please enter the number of columns for Matrix B: ");
	scanf("%d",&column2);

	if (row1 != column2) 
	{	
		printf("Sorry....Matrices cannot be multiplied !\n Please enter a valid matrtix");
		return 0;
	}

	for(i=0;i<row1;i++) 
	{
		for(j=0;j<column1;j++)
		{
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
		for(j=0;j<column2;j++) 
		{
			c[i][j] = 0;
			for(k=0;k<column1;k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j]; 
			}	
		}	
	}	
	printf("\nThe product of the two matrices is: \n\n");

	
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
