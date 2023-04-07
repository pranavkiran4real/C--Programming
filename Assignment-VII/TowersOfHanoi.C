
#include <stdio.h>
void Tower(int nod,char frompeg,char topeg,char auxpeg)
{
    if (nod==1)
    {
        printf("\n Move disk 1 from peg %c to peg %c",frompeg,topeg);
        //printf("\nrecurtion winding up");
        return;
    }
    
    Tower(nod-1,frompeg,auxpeg,topeg);
    printf("\n Move disk %d from peg %c to peg %c",nod,frompeg,topeg);
    
    Tower(nod-1,auxpeg,topeg,frompeg);
}
int main()
{
    int nod;
	printf("Enter the number of disks : ");
    scanf("%d", &nod);
    printf("The sequence of moves involved in Tower of Hanoi are :\n");
    Tower(nod, 'F', 'T', 'A');
}


