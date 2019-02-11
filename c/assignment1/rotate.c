#include<stdio.h>
#define INIT 32
int rotate_right(int num,int bits)
{
	return (num>>bits)|(num<<(INIT-bits));
}

int main()
{
	int num,result,bits;
	printf("Enter number ");
	scanf("%d",&num);
	printf("Enter no of bit positions to be shifted by right  ");
	scanf("%d",&bits);
	result=rotate_right(num,bits);
	printf("shifted number is %d",result);
	return 0;
}
