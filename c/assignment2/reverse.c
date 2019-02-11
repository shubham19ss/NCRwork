#include<stdio.h>
int main()
{
	int input_num,rem,temp_num,rev_num=0;
	printf("Enter the number :");
	scanf("%d",&input_num);
	temp_num=input_num;
	while(temp_num>0)
	{
		rem=temp_num%10;
		rev_num=rev_num*10+rem;
		temp_num=temp_num/10;
	}
	printf("Reverse number of %d is %d ",input_num,rev_num);
	return 0;
}

