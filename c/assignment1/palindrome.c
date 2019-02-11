#include<stdio.h>
int main()
{
	int num,temp;
	printf("Enter number:  ");
	scanf("%d",&num);
	temp=num;
	int rev_num=0;
	while(temp>0)
	{
		int rem=temp%10;
		rev_num=rev_num*10+rem;
		temp=temp/10;
	}
	if(num==rev_num)
	{
		printf("%d is a plaindrome",num);
	}
	else
		printf("%d is not a palindrome",num);
	return 0;
}

