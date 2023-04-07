#include<stdio.h> 
#include<conio.h> 
main()
 { 
int i,j; 
for(i=1;i<=5;i++ )
{ 
for(j=0;j<5-i;j++) 
printf(" "); 
for(j=1;j<=i-1;j++) 
printf("%d",j); 
for(j=i;j>=1;j--) 
printf("%d",j); 
printf("\n"); 
} 
}

