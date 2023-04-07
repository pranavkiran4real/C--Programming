#include <stdio.h>
void SortRefList(int n, int* p)
{
	int i,j,temp;
	for ( i= 0; i < n; i++) {
		for (j=i + 1; j < n; j++)
		{
			if (*(p + j) < *(p + i)) 
			{
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
	printf("Number After Sorting:");
	for (i=0; i < n; i++)
	{
		printf("%d ", *(p + i));
	}
}
	int main(){
		int limit,k;
		int arr[50];
		printf("Enter the limit(<=50):");
		scanf("%d",&limit);
		printf("Enter the elements of the array: ");
		for(k=0;k<limit;k++){
			scanf("%d",&arr[k]);
		}
		SortRefList(limit, arr);
		return 0;	
	}

