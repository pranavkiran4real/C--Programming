#include<stdio.h>
#include<conio.h>
main() {
int hours[10];
int overtime_pay[10];
int i;
for(i=0;i<10;i++) {
printf("\nEnter the hours of Employee# %d : ",i+1);
scanf("%d",&hours[i]);
if (hours[i] > 40)
overtime_pay[i] = (hours[i] - 40) * 12;
else
overtime_pay[i] = 0;
}
for(i=0;i<10;i++) {
printf("Overtime Pay of Employee# %d is %d\n",i+1,overtime_pay[i]);
}
}
