#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
int main()
{
	int i, j, n;
	char name[10][50], temp[50];	
	printf("Enter total number of names: ");
	scanf("%d",&n);
	printf("Enter the names :\n");
	for(i=0;i<n;i++)
	{
			scanf("%s",name[i]);
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}
	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++)
	{
		puts(name[i]);
		}
	return 0;
}
