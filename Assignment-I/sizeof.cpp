
#include<stdio.h>
int main()
{
	char a;
	int b;
	float c;
	printf("enter the character: ");
	scanf("%c",&a);
	printf("Enter the number: ");
	scanf("%d",&b);
	printf("Enter the float: ");
	scanf("%f",&c);
	printf("Size of %c is %d",a,sizeof(a));
	printf("\nSize of %d is %d",b,sizeof(b));
	printf("\nSize of %f is %d",c,sizeof(c));
	return 0;
}
