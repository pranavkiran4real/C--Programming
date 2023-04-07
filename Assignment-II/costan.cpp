#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	for(i=0;i<=360;i+=15)
	{
		printf("The values of cos(%d) and tan(%d) are:%f and %f\n",i,i,cos(i),tan(i));
	}
}
