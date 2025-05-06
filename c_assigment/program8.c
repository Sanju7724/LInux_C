/* program 8
 program to read one line at a time from stdin and print it's length*/


#include<stdio.h>
int main()
{
	FILE *fp = NULL;
	int line = 0;
	int i = 0;
	char ch ;
	fp = fopen("input.txt","r");
	while((ch = fgetc(fp))!= EOF)
	{
		if(ch == '\n')
		{
			line++;
			printf("Length of line %d is : %d\n",line,i);
			i = 0;
			

		}
		else
		{
			ch = fgetc(fp);
			i++;
		}
	}
	if(i>0)
	{

		printf("Length of line %d is : %d\n",line,i);
	}

	fclose(fp);
	return 0;
}




	
