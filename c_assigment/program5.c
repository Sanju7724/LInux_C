/*program to read character by character from input.txt file 
 print each word on screen as well total number of words*/

#include<stdio.h>
int main()
{
	int count = 0,i = 0;
	char ch;
	char word[100];
	FILE *fp = NULL;
	fp = fopen("input.txt","r");
	while((ch = fgetc(fp))!= EOF)
	{
		if (ch == 32)
		{
			if(i>0)
			{

			word[i] = '\0';
			printf("%s\n",word);
			count++;
			i =0;
			}

		
		}
		else
		{
			word[i++] = ch;
		}
	}
	if (i> 0)
	{
		word[i] = '\0';
		printf("%s\n",word);
		count++;
	}
	printf("total number of words are %d\n",count);
}
			


