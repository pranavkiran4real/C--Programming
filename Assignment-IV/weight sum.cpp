//Program by:Pranav Kiran(BE CSE)
//Register number:715520104036
#include<stdio.h>
#include<math.h>

int checking_prime(int num)
{
	int k, flag = 1;
	for (k=2; k <= num/2; k++)
	{
		if (num%k == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	printf("\n****************************************************");
	printf("\nProgram Output Performed by: Pranav Kiran S (BE CSE)");
	printf("\n****************************************************");
	int n, i, j;
	int temp; 
	int weight = 0;
	int arr[100];
	printf("\nEnter the number of elements in your array: ");
	scanf("%d", &n);
	
	while(i < n)
	{
		printf("Enter number %d  ", i+1);
		scanf("%d", &arr[i]);
		i++;
	}
	
	for (i=0; i<n; i++)
	{
		weight = 0;
		temp = arr[i];
		for (j=1; j<temp; j++)
		{
			if (j*j*j == temp)
			{
				weight += 5;
			}
		}
		
		if ((temp%4 == 0) && (temp%6 == 0))
		{
			weight += 4;
		}
		
		if (checking_prime(temp) == 1)
		{
			weight += 3;
		}
		
		if (i == 0)
		{
			printf("\n");
			
		}
		printf("<%d,%d> , ", temp, weight);
		
	}
}
