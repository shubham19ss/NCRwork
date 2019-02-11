#include<string.h>
#include<stdlib.h>
#include<stdio.h>
void string_reverse(char *str, int low, int high)
{
	char temp=str[low];
	str[low]=str[high];
	str[high]=temp;
	if(low+1<high-1)
	{
	string_reverse(str,low+1,high-1);
	}
}
int main()
{
	char *str=(char*)malloc(sizeof(char)*100);
	printf("Enter the string\n");
	fgets(str,100,stdin);
	string_reverse(str,0,strlen(str)-1);
	printf("reversed string is %s",str);	
	return 0;
}
