#include<stdio.h>
void replacetab(char s[])
{
	FILE*fp=fopen(s,"r");
        FILE*fp1=fopen("out.txt","w");	
	char ch,str[100]={" "};
	int iter=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='	')
		{
			str[iter++]='\\';
			str[iter]='t';
		}
		else{
		str[iter]=ch;
		}
		iter++;

	}
	printf("%s",str);
	iter=0;
	while(str[iter]!='\0')
	{
		fputc(str[iter],fp1);
		iter++;
	}

}

