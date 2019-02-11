#include<stdio.h>
#include<stdlib.h>
char* replace(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
			str[i]='-';
		i++;
	}
	return str;
}
int main()
{
	char *str=(char*)malloc(100*sizeof(char));
	printf("Enter the String\n");
	fgets(str,100,stdin);
	printf("Your entered string is %s",str);
	char *n=replace(str);
	printf("Replaced string is %s",n);
	return 0;
}
