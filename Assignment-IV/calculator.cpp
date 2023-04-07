#include<stdio.h>
main()
{	int num1,num2,a;
	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Square of the number \n6.Cube of the number \nEnter your choice : ");
	scanf("%d",&a);
	switch(a)
		{
		case 1:
			printf("Enter the second number :");
			 scanf("%d",&num2);
			 printf("Sum of the two numbers is :%d ",num1+num2);
			 break;
			
		case 2:
			printf("Enter the second number :");
			 scanf("%d",&num2);
			 printf("Subtraction of two numbers is :%d",num1-num2);
			 break;
			
		case 3:
			printf("Enter the second number :");
			 scanf("%d",&num2);
			 printf("Multiplication of two numbers is :%d",num1*num2);
			 break;
			
		case 4:
			printf("Enter the second number :");
			 scanf("%d",&num2);
			 printf("Division of two numbers is :%d",num1/num2);
			 break;
			
		case 5:
			
			 printf("Square of the number is :%d",num1*num1);
			 break;
			 
		case 6:
			
			 printf("Cube of the number is :%d",num1*num1*num1);
			 break;
		}
		
} 
