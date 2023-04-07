#include<stdio.h>
int main()
{
	int n, i = 0,j = 0,k = 0, sum=0, poh = 0, arr[100], avg = 0; 
	printf("Enter the number of persons: ");
	scanf("%d", &n);
	
	while(i < n)
	{
		printf("Enter height of person %d  ", i+1);
		scanf("%d", &arr[i]);
		i++;
	}

	while (j < n)
	{
		sum += arr[j];
		j++;
	}
	avg = sum / n;
	
	while (k < n)
	{
		if (arr [k] > avg)
		{
			poh += 1;
		}
		k++; 
	}
	
	printf("\nThe number of people above the average height among the %d people are %d",n,poh);
}
