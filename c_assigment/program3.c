/* program 3
  write  a program to read input characters from stdin and print it on stdout*/

#include<stdio.h>
int main()
{
	FILE *fp = NULL;
	char ch;
	fp = fopen("input.txt","r");
	while(!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}

