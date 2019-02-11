#include<stdio.h>
int main()
{
	int bin_num=0,dec_num=0;
	int temp_num,select,base=1;
	printf("1: binary to decimal\n2: decimal to binary\nSelect one:  ");
	scanf("%d",&select);
	if(select==1)
	{
		printf("Enter binary number in 0's and 1's");
		scanf("%d",&bin_num);
		temp_num=bin_num;
		while(temp_num>0)
		{
			int rem=temp_num%10;
			dec_num=dec_num + rem*base;
			base=base*2;
			temp_num=temp_num/10;
		}
		printf("Decimal Value of given binary number is %d",dec_num);

	}
	else if(select ==2)
	{
		printf("Enter the decimal number");
		scanf("%d",&dec_num);
		temp_num=dec_num;
		while(temp_num>=1)
		{
			
			int rem=temp_num%2;
			bin_num=bin_num+rem*base;
			base=base*10;
			temp_num=temp_num/2;
		}
		printf("Binary value of given decimal number is %d",bin_num);
	}
	else
	{
		printf("Enter correct number\n");
	}
return 0;
}
