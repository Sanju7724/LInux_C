/*program6
 program to read characters by character from the file input.txt and print the numbwr of 1,2,3,4...etc*/

#include<stdio.h>
int main()
{
	int count = 0, i =0;
	char ch, word[100];
	FILE *fp = NULL;
	fp = fopen("input.txt","r");
	while((ch = fgetc(fp)) != EOF)
	{
		if(ch == 32)
		{
			count++;
		}
		else
		{
			if(count>0)
			{
				word[count]++;
				count = 0;
			}
		}
	}
	if(count > 0)
	{
		word[count]++;
	}
	for (int j =1 ; j <100 ;j++)
	{
		if(word[j] > 0)
		{
			printf("%d letter word = %d\n",j,word[j]);


		}

	}
	fclose(fp);
	return 0;
}
					
				
	

