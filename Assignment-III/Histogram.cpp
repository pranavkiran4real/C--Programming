#include<stdio.h>
#include<conio.h>
main() {
	int num[5],number[5];
	int max = 0;
	int i,j;
	printf("Enter five integer values: \n");
	for(i=0;i<5;i++) {
		scanf("%d",&number[i]);
		num[i] = number[i];
		if (num[i] > max)
			max = num[i];		
	}
	for(i=max;i>0;i--) {
		printf("%2d | ",i);
		for(j=0;j<5;j++){
			if (num[j] == i){
				printf(" x ");
				num[j] = num[j]- 1;
			}
			else printf("   ");
		}
		printf("\n");
	}
	printf("_____________________\n");
	printf("    ");
	for(j=0;j<5;j++){
		printf("%3d",number[j]);
	}
}
