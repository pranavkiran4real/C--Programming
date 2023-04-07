#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("1.Read two numbers \n2.Calculate Total \n3.Calculate average \n4.Display smallest value \n5.Display highest value \nEnter your choice: ");
	scanf("%d",&a);
	switch (a)
		{
			case 1:
				printf("\nEnter number 1: ");
				scanf("%d",&b);
				printf("\nEnter number 2: ");
				scanf("%d",&c);
				printf("Readed two numbers are %d and %d",b,c);
				break;
			case 2:
				printf("\nEnter number 1: ");
				scanf("%d",&b);
				printf("\nEnter number 2: ");
				scanf("%d",&c);
				printf("The total of two numbers is %d",b+c);
				break;
			case 3:
				printf("\nEnter number 1: ");
				scanf("%d",&b);
				printf("\nEnter number 2: ");
				scanf("%d",&c);
				d = b+c;
				printf("The average of two numbers is %d",d/2);
				break;
			case 4:
				printf("\nEnter number 1: ");
				scanf("%d",&b);
				printf("\nEnter number 2: ");
				scanf("%d",&c);
				if (b<c)
				{
					d = b;
				}
				else
				{
					d = c;
				}
				printf("\nThe smallest of two numbers is %d",d);
				break;
			case 5:
				printf("\nEnter number 1: ");
				scanf("%d",&b);
				printf("\nEnter number 2: ");
				scanf("%d",&c);
				if (b>c)
				{
					d = b;
				}
				else
				{
					d = c;
				}
				printf("\nThe greatest of two numbers is %d",d);
				break;
		}
}
