#include<stdio.h>
int main()
{
char a;
int b;
int c;
printf("enter the item name: ");
scanf("%c",&a);
printf("enter the quantity: ");
scanf("%d",&b);
printf("enter the price: ");
scanf("%d",&c);
printf("*********Bill*******");
printf("\nITEM \t QUANTITY \t PRICE \t AMOUNT");
printf("\n-----------------------------------------------------");
printf("\n%c \t %d \t\t %d \t %d",a,b,c,b*c);		
printf("\nTotal Amount to be paid\t %d",b*c);
printf("\n------------------------------------------------------");
return 0;
	
}
