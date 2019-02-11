#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void insert(char str[50],char str2[100])
{
	int iter=0,iter2=1;
	while(iter2<strlen(str))
	{
		if(str[iter2]=='-')
		{
			char temp=str[iter+1];
			char start=str[iter-1];
			while(start!=temp)
			{
				str2[iter++]=start;
				start++;
			}
			str2[iter++]=start;
			iter2++;
		}
		else
		{
			if(str[iter2-2]!='-')
			str2[iter++]=str[iter2-1];
		}
		iter2++;
	}
	if(str[strlen(str)-2]!='-')
		str2[iter++]=str[strlen(str)-1];
	str2[iter]='\0';
}
int main()
{
	char str[50],str2[100];
	printf("Enter the string\n");
	scanf("%[^\n]s",str);
	insert(str,str2);
	printf("resultant string is\n");
	printf("%s\n",str2);
	
	return 0;
}
