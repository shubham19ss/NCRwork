#include<stdio.h>
#include<string.h>
void rotate(char s[],char name[])
{
	FILE*fp=fopen(s,"r");
	FILE *fp1=fopen("out.txt","w");
	char ch;
	int flag=0;
        char temp[10]={" "};
	char str[100]={" "};
	int i=0,j=0;
	while((ch=fgetc(fp))!=EOF)
	{    
	       	
             
		if(ch==' ')
		{          
			if(strcmp(temp,name)==0)
				{   
				   strrev(temp);
				  
				}
		     strcat(str," ");
             	     strcat(str,temp);
		     strcpy(temp,""); 
		     i=0;

		}
		else
		{
			temp[i++]=ch;
		       
		}
		
                 

	}	
	 if(strcmp(temp,name)==0)
                                {
                                   strrev(temp);

                                }
                     strcat(str," ");
                     strcat(str,temp);
               

	printf("%s",str);

        i=0;
	while(str[i]!='\0')
	{
	fputc(str[i],fp1);
	i++;
	}

}
