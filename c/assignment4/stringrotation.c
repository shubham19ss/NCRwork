#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
	char str[100];
	int iter,iter2;
	printf("Enter the text\n");
	scanf("%s",str);
	for( iter=0;iter<strlen(str);iter++)
	{
		printf("%s",str+iter);
		for( iter2=0;iter2<iter;iter2++)
			printf("%c",str[iter2]);
		printf("\n");
	}

	return 0;
}
