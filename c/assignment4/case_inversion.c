#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str=(char*)malloc(100*sizeof(char));
	int n;
	printf("Enter the string\n");
	fgets(str,100,stdin);
	printf("1.convert to Upper case\n2.convert to Lower case\n");
        printf("Select one ");
        scanf("%d",&n);
	if(n==1)
	{
		printf("Upper case string is %s",strupr(str));
	}
	else if(n==2)
	{
		printf("Lower case string is %s",strlwr(str));
	}
	else
	{
		printf("Select correct option");
	}
	return 0;
}
