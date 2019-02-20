#include<stdio.h>
int main()
{
	int i=1;
	char *c=(char*)&i;
	if(*c)
	{
		printf("compiler is little endian");
	}
	else
		printf("Compiler is Big endian");
	return 0;
}
