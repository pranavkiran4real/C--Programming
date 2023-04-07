#include<stdio.h>
void con2Bin(int num)
{    
    int rem;
    if (num == 0) return;
    else
    {
        rem = num % 2; 
        con2Bin(num/2);          
        printf("%d", rem);
    }
}

void con2Oct(int num)
{    
    int rem;
    if (num == 0) return;
    else
    {
        rem = num % 8; 
        con2Oct(num/8);          
        printf("%d", rem);
    }
}

void con2Hex(int num)
{    
    int rem;
    if (num == 0) return;
    else
    {
        rem = num % 16;         
        con2Hex(num/16);          
        if(rem >= 10)
            printf("%c", rem+55);
	    else
            printf("%d", rem);
    }
}

int main(void)
{
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

        printf("Select conversion: \n\n");
        printf("1. Decimal to binary. \n");
        printf("2. Decimal to octal. \n");
        printf("3. Decimal to hexadecimal. \n");              

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            	printf("\nThe Binary equivalent of %d is ",num);
                con2Bin(num);
                break;
            case 2:
            	printf("\nThe Octa equivalent of %d is ",num);
                con2Oct(num);
                break;              
            case 3:
            	printf("\nThe Hexa equivalent of %d is ",num);
                con2Hex(num);
                break;
            default:
                printf("Invalid choice.\n\n");
        }
}


