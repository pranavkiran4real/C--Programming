#include <stdio.h>
int main()
{
int n, lastdig;
printf("Enter the number: ");
scanf("%d", &n);
lastdig=n%10;
printf("last digit = %d", lastdig);
return 0;
}
