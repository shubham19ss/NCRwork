#include<stdio.h>
int main()
{
	int num,temp;
	printf("Enter number:  ");
	scanf("%d",&num);
	temp=num;
	int sumofdigits=0;
	while(temp>0)
	{
		int rem=temp%10;
		sumofdigits=sumofdigits+rem;
		temp=temp/10;
	}
	printf("Sum of digits of number %d is %d",num,sumofdigits);
	return 0;
}
