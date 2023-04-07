#include<stdio.h>
int main()
{
	int a[50];
	int i,j,k;
	int temp,n;
	
	printf("\n Enter the total no of terms :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf(" Enter the element %d : ",i+1);
		scanf("\n %d",&a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n-1;i++)
	{
		printf("  loop iteration will %d  \n\n",i+1);
		
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			
			for(k=0;k<n;k++)/* To print each and every iteration*/
			{
				printf("  %d",a[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("\n Sorted array :");/* To print the sorted final Array*/
	
	for(i=0;i<n;i++)
		printf("  %d",a[i]);
	return 0;
}
