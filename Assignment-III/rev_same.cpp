#include<stdio.h>
#include?<conio.h>
main()
{
int number,rev=0,temp;
number=temp
printf("enter the number :");
scanf("\n%d",&number);
while(number>0)
	{
		temp=number%10;
		rev=rev*10+temp
		number=number/10;
	}
printf("The reverse of the number is :%d\n",rev"")
if(rev==number)
 	printf("\nThe number are same !");
else
 	printf("\nThe numbers are not same !");
}
