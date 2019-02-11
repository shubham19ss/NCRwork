#include<stdio.h>
int main()
{
	int num,temp;
	printf("Enter number:  ");
	scanf("%d",&num);
	temp=num;
	int arm_number=0;
	while(temp>0)
	{
		int rem=temp%10;
		arm_number=arm_number+rem*rem*rem;
		temp=temp/10;
	}
	if(num==arm_number)
	{
		printf("%d is armstrong number",num);
	}
	else
		printf("%d is not armstrong number",num);
	return 0;
}

