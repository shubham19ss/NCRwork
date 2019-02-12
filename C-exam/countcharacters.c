#include<stdio.h>
void countcharacters(char s[])
{
	FILE *fp;//File handle declaration
	char ch;
	int alphacount=0,digitcount=0,spacecount=0,specialcount=0;
	fp=fopen(s,"r");
	while((ch=fgetc(fp))!=EOF)
        {
              if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))//chech for alphabet
		      alphacount++;
	      else if(ch>='0' &&  ch<='9')//check for digits
		      digitcount++;
	      else if(ch>=58 && ch<=64)//check for special characters
		      specialcount++;
	      else if(ch=' ')//check for spaces
		      spacecount++;
	}	
	printf("alphabetcount %d\ndigit count %d\n spacecount %d\nspecialcount %d\n",alphacount,digitcount,spacecount,specialcount);
}

