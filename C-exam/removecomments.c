#include<stdio.h>
#include<string.h>
void removecomments(char s[])
{
	FILE*fp,*fp2;
	fp=fopen(s,"r");
	fp2=fopen("out.txt","w");
	char ch;
	char str[100]={" "};
	int iter=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='/')
		{   ch=fgetc(fp);
			if(ch=='/')
			{
                              while((ch=fgetc(fp))!='\n');
			}
			else if(ch=='*')
			{
				while(((ch=fgetc(fp))!='*'));
				if((ch=fgetc(fp))=='/')
					continue;
				else
					str[iter++]=ch;
						
			}
			else
			{
				str[iter++]='/';
				str[iter]=ch;
				printf("hello");
			
			}
		
				
		}

		else{
			str[iter++]=ch;
			
			
		    }

	}
	iter=0;
	while(str[iter]!='\0')
	{
		fputc(str[iter],fp2);
		iter++;
	}


      
}

