#include<stdio.h>
 int main()
{
int number,split,sum=0;
printf("Enter the number :");
scanf("%d",&number);
while(number>0)
{
split=number%10;
sum=sum+split;
number=number/10;
}
printf("The sum of digits of the number is :%d",sum);
return 0;
}
