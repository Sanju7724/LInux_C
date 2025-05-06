/* program 9
 write program that takes two strings from stdin implement the function void my_strcat(char *s1,char *s2)*/

#include<stdio.h>
#include<string.h>
void my_strcat(char *s1, char *s2);
void my_strcat( char *s1,char *s2)
{
	int i;
	int len1,len2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	for(i = 0;i <= len2;i++)
	{
		s1[len1+i] = s2[i];
	}
	printf("concatenated string: %s\n",s1);
}
int main()
{
	char s1[500],s2[500];
	printf("enter the first string:");
	fgets(s1,sizeof(s1),stdin);
	printf("enter the second string:");
	fgets(s2,sizeof(s2),stdin);
	my_strcat(s1,s2);
	return 0;
}


