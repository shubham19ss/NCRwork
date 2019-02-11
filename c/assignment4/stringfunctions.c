#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char reverse[100];

char *streverse(char str[50])
{
	int iter=0,len=strlen(str)-1;
	while(iter<strlen(str))
	{
		reverse[iter]=str[len];
		iter++;
                len--;
	}
	return reverse;
}
int strcomparision(char str[50],char str2[50])
{
	int iter=0;
	while(str[iter]==str2[iter])
	{
		if(str[iter]=='\0')
			return 0;
		iter++;
	}
	return str[iter]-str2[iter];
}
char *strconcatinate(char *src,char *out)
{
	int iter,iter2;
	for (iter = 0; out[iter] != '\0'; iter++)
        ;
    for (iter2 = 0; src[iter2] != '\0'; iter2++)
        out[iter+iter2] = src[iter2];
    out[iter+iter2] = '\0';
    return out;
}
void strcopy(char *str,char *str2)
{
	int iter=0;
	while((str[iter]=str2[iter])!='\0')
	iter++;
	return ;
}
int main()
{
	char str[50],str2[50],*cat;
	printf("Enter the strings to compare\n");
	scanf("%s",str);
	scanf("%s",str2);
	if(strcomparision(str,str2)==0)
	{
		printf("The strings are equal\n");
	}
	else
	{
		printf("The strings are unequal\n");
	}
	
	cat=strconcatinate(str,str2);
	printf("Concatenated string is\n");
	printf("%s\n", cat);
	strcopy(cat,"cdac assignment");
	printf("copied string is\n");
	printf("%s\n", cat);
         char *rev=streverse(str);
	printf("reverse of string %s is\n", str);
	printf("%s\n", rev);
	return 0;
}