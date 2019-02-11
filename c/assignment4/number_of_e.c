#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	int j;
	int count=0;
	char* s[]={"we will teach you how to",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million"};
	while(i<5)
	{
		for(j=0;j<strlen(s[i]);j++)
		{
			if(s[i][j]=='e'){
			count++;
			}
		}
		i++;
	}
	printf("number of 'e' in the given string is %d",count);
	return 0;
}
