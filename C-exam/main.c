#include<stdio.h>
int main()
{ int ch;
	char str[20]={" "};
	do{
		printf("Enter the ddesired operation to be performed\n");
        	printf("1.Count the characters\n2.Remove comments\n3.rotate the matched word\n4.replace the tabs\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:countcharacters("abc.txt");
				break;
                	case 2:removecomments("qwe.txt");
			       break;
			case 3:scanf("%s",str);
			       rotate("abc.txt",str);
			       break;
			case 4:replacetab("tab.txt");
			       break;
			case 5:printf("exiting...");
			       break;
		      	default :printf("invalid choice");
			       break;
		}
	}while(ch!=5);
return 0;
}	

