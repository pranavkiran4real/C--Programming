

#include<stdio.h>
#include<string.h>
int main()
{
	char input[200];
    int count = 0, i,j;
    char oldstr[20];
    char newstr[20];
 
    printf("Enter the string:\n");
    gets(input);
    
  
    for (i = 0;input[i] != '\0';i++)
    {
        if (input[i] == ' ')
            count++;    
    }
    printf("\nNumber of words in given string are: %d\n\n", count + 1);
    
    
    for (i=0; input[i] != '\0';i++)
    {
    	if(i == 0)
    	{
    		input[i] = toupper(input[i]);
		}
    	if (input[i] == '.')
    	{
    		input[i+2] = toupper(input[i+2]);
		}
	}
	
	printf("\n------Capitalized paragraph:-------\n\n");
	for (i=0; input[i] != '\0';i++)
	{
		printf("%c", input[i]);
	}
	
	/*replacing a word in the given para*/
	char *words[count];/*For storing words as an array*/
    j = 0;
    char *token = strtok(input, " ");
    while (token != NULL)
    {
        words[j] = token;
        token = strtok(NULL, " ");
        j++;
    }
    
    printf("\n\n---------------------------------");
    printf("\n\nEnter the string you want to replace: ");
	gets(oldstr);
	printf("\n\nEnter the new string to be replaced: ");
	gets(newstr);
	
	for (i=0; i<=count; i++)
	{
		if (strlen(words[i]) == strlen(oldstr))
		{
			if (!strcmp(words[i],oldstr))
			{
				words[i] = newstr;
			}
		}
	}
	

	printf("\n-----Paragraph after replacing the words-----\n");
	printf("\n");
	for (i = 0; i <= count; i++)
	{
		printf("%s ", words[i]);
	}
	
	return 0;
}
