#include<stdio.h>
int main()
{
	int prime_numbers = 0, composite_numbers = 0, a, i;
	while(1)
	{
		printf("Enter a number: ");
		scanf("%d",&a);
		if (a == -1)
		{
			printf("\nThe number of prime numbers entered is %d",prime_numbers);
			printf("\nThe number of composite numbers entered is %d",composite_numbers);
			break;
		}
		else
		{
			for(i=2;i<a;i++)
			{
				if (a%i == 0)
				{
					composite_numbers += 1;
					break;
				}	
				else
				{
					prime_numbers += 1;
					break;
				}
					
			}
		}
	}
	return 0;
}
