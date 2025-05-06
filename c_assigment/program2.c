/* program to print ten numbers from input2.txt file
  program2*/
#include<stdio.h>
int main()
{
	int number[10];
	int i;
	for (i = 0;i<10;i++)
	{
		scanf("%d",&number[i]);
		printf("%d\n",number[i]);
	}
}

