#include<stdio.h>
int main()
{
	int prime_numbers = 0, composite_numbers = 0, a, i,x;
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
		else if (a == 2)
		{
			prime_numbers += 1;
		}
		else
		{
			for(i=2;i<a;i++)
			{
				x = a%i;
				if (x != 0)
				{
					if (i != a-1)
					{
						continue;
					}
					else
					{
						prime_numbers += 1;
					}
					
				}
				else
				{
					composite_numbers += 1;
					break;
				}		
			}
		}
	}
	return 0;
}
