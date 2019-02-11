#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void delete(char str[50],char ch)
{
	int iter,iter2=0;
	for( iter=0;iter<strlen(str);iter++)
	{
		if(str[iter]==ch)
			continue;
		str[iter2++]=str[iter];
	}
	str[iter2]='\0';
}
int main()
{char str[50],ch;
	printf("Enter the string ,d character \n");
	scanf("%s %c",str,&ch);
	delete(str,ch);
	printf("resultant string is\n");
	printf("%s\n",str);
	return 0;
}
