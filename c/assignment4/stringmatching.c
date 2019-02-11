#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int search(char str[50],char str2[10])
{
	int iter,iter2;
	for(iter=0;iter<strlen(str);iter++)
	{
		if(str[iter]==str2[0])
		{
			int index=iter;
			for(iter2=0;iter2<strlen(str2)&&iter<strlen(str);iter++,iter2++)
			{
				if(str[iter]!=str2[iter2])break;
			}
			if(iter2==strlen(str2))
				return index;
		}
	}
	return -1;
}
int main()
{
	printf("Enter the strings\n");
	char str[50],str2[10];
	scanf("%[^\n]s",str2);
	scanf("%s",str2);
	int result=search(str,str2);
	if(result==-1)
		printf("No such string\n");
	else
	printf("result is %d\n", result);
	return 0;
}
