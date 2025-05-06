/* program 4
  modify program 3 to count number of characters  and print on screen*/
#include<stdio.h>
int main()
{
	FILE *fp = NULL;
	char ch;
	int count = 0;
	fp = fopen("input.txt","r");
	while(!feof(fp))
	{
		if((ch = fgetc(fp))!= 32)
		{
			printf("%c\n",ch);
			count++;
		}
	}
	printf("number of characters in file = %d\n",count);
}

