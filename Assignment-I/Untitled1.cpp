#include<stdio.h>
#include<conio.h>
int main()
{
char upper, lower;
int a;
printf("Enter the character in uppercase : ");
scanf("%c", &upper);
a=upper;
lower= a+32;
printf("\nIts Lowercase of %c is  %c",upper,lower);
getch();
return 0;
}

