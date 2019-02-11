#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i=0,j,temp;
	printf("Enter the number of strings");
        scanf("%d",&n);
	char str[n][50];
	while(i<=n)
	{
		fgets(str[i],100,stdin);
		i++;
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			temp=strcmp(str[i],str[j]);
			if(temp>0)
			{
				char s[1][50];
				strcpy(s[0],str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s[0]);
			}
		}
	}
	i=0;
	while(i<=n)
	{
		printf("%s",str[i]);
		i++;
	}
	return 0;
}
