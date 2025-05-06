/* program 7
 modify program 3 by reading one line at a time instead of character by character*/

#include<stdio.h>
int main()
{
	FILE *fp  = NULL;
	char text[500];
	fp = fopen("input.txt","r");
        while(fgets(text,500,fp)!= NULL)
	{
		printf("%s\n",text);
	}
	fclose(fp);
	return 0;
}
