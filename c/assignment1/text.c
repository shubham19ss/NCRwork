#include <stdio.h>

int main() 
{
    char text[100];
    int dig=0,alphabets=0,space=0,tab=0,i=0;
 printf("enter the text");
    scanf("%[^\n]s",text);
    while(text[i]!='\0')
    {
        if(text[i]>='0'&&text[i]<='9')
          dig++;
          if(text[i]>='a'&&text[i]<='z'||text[i]>='A'&& text[i]<='Z')
            alphabets++;
            if(text[i]=='\t')
              tab++;
            if(text[i]==' ')
                space++;
            i++;
    }
    printf("digits count %d\nalphabets count %d\nspace count  %d\n tabspace count\n",dig,alphabets,space,tab);
    return 0;
}

