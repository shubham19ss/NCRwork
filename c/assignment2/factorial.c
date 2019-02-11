#include<stdio.h>
long int factorial(int num)
{
	if(num==0)
		return 1;
	else
		return num*factorial(num-1);
}
int main()
{
	int number;
	long int fact=1;
	printf("enter the number");
	scanf("%d",&number);
         fact=factorial(number);
	 printf("%ld",fact);
	 return 0;
}
