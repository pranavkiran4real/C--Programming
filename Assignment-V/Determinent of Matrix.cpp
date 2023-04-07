
#include<stdio.h>
int main()
{
	int row,col,det;
	int i,j;
	int a[10][10], b[10][10];
	
	row = 3;
	col = 3;
	
	for(i=0;i<row;i++)
	 {
		for(j=0;j<col;j++) 
		{
			printf("Please enter value for a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}	

	det = (a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]))
          - (a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]))
          + (a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]));
 	
	printf("\nThe determinant of the matrix is: %d\n\n",det);


	return 0;	
	
}
