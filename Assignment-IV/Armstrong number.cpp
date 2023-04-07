#include<stdio.h>
#include<math.h>
int length(int num)
{
	int length=0;
    while(num>0)
    {
   		length=length+1;
        num=num/10;	
	}
    return length;   
}

int main()
{
	int num, temp, armstrong=0, digit;
	
	printf("\n Enter the number : ");
	scanf("%d",&num);
	printf("\n The Length of the number is %d",length(num));
	
	temp=num;
	while(temp>0)
	{
		digit = temp % 10;
    	armstrong = armstrong + pow(digit, length(num));
    	temp = temp/10; 
	}
	
    if (armstrong==num)
    {
	
    	printf("\n %d is an armstrong number. ",num);
	}
    	
	else
	{
		printf("\n %d is not an armstrong number.",num);
	}
	return 0;
}
