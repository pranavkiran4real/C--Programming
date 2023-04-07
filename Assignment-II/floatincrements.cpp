#include<stdio.h>
#include<conio.h>
main()
{
	float a;
	int b;
	printf("Enter the floating point number: ");
	scanf("\n%f",&a);
	printf("\nEnter the integer:");
	scanf("\n%d",&b);
	if(a>3.14)
	{
		b+=10;
	}
	printf("\nThe floating point number is:%f",a);
	printf("\nThe integer is:%d",b);
	return(0);
}
