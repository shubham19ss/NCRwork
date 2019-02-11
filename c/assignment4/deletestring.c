#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void delete(char str[50],char ch)
{
	int iter2=0,iter;
	for(iter=0;iter<strlen(str);iter++)
	{
		if(str[iter]==ch)
			continue;
		str[iter2++]=str[iter];
	}
	str[iter2]='\0';
	return ;
}
	
int main()
{int iter;

	printf("Enter the strings\n");
	char str[50],ch,str2[50];
	scanf("%s",str);
	scanf("%s",str2);
	
for(iter=0;iter<strlen(str2);iter++)
 delete(str,str2[iter]);

	printf("Output string is \n");
	printf("%s\n", str);
	
	return 0;
}
