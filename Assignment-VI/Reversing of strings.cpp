#include<stdio.h>
#include<Stdlib.h>
#include<string.h>
int main() 
{
	char string[100],reverse[100];
	int length,i,rev;
	printf("Enter the string: ");
	scanf("%s",string);
	length = strlen(string);
	rev=length-1;
	for(i=0;i<=length;i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z') 
		{
			while (!(string[rev] >= 'A' && string[rev] <= 'Z' || string[rev] >= 'a' && string[rev] <= 'z')) 
			{
				rev--;
			}
			reverse[i] = string[rev];
			rev--;
		}
		else
		{
			reverse[i] = string[i];
		}
	}
	
	printf("\nReversed String withoug changing special characters: %s",reverse); 
}
