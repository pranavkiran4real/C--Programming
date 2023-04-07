#include<stdio.h>
int main()
{
	int row,col,scal;
	int i,j;
	int a[10][10], b[10][10];
	
	printf("Please enter the number of rows for Matrix: ");
	scanf("%d",&row);
	printf("Please enter the number of columns for Matrix: ");
	scanf("%d",&col);
	printf("Please enter the scalar value: ");
	scanf("%d",&scal);

	for(i=0;i<row;i++)
	 {
		for(j=0;j<col;j++) 
		{
			printf("Please enter value for a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}	


	for(i=0;i<row;i++) 
	{  
		for(j=0;j<col;j++) 
		{
			b[i][j] = scal * a[i][j]; 
		}	
	}	
	
	printf("\nThe scalar multiplication of the matrix is: \n\n");

	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]); 
		}
		printf("\n");
	}
	
	return 0;	
	
}
