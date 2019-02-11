#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("enter the number of strings :");
	scanf("%d",&n);
	char *str[n];
	printf("Enter the strings");
	for(i=0;i<n;i++)
	{
		str[i]=(char *)malloc(100*sizeof(char));
		fgets(str[i],100,stdin);
	}
	printf("The strings you have entered are\n");
	for(i=0;i<n;i++)
	{	
		printf("%s\n",s[i] );
	}
	return 0;
}
