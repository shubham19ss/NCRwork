#include<stdio.h>
int main()
{
	int salary=0,hra,da;
	int gross_sal=0;
	printf("Enter the salary :");
	scanf("%d",&salary);
	if(salary>=1 && salary<=4000)
	{
		hra=salary*0.1;
		da=salary*0.5;
	}
	else if(salary>=40001 && salary<=8000)
        {
                hra=salary*0.2;
                da=salary*0.6;
	}
	else if(salary>=8001 && salary<=12000)
        {
                hra=salary*0.25;
                da=salary*0.7;
	}
	else
	{
		hra=salary*0.3;
		da=salary*0.8;
	}
	gross_sal=salary+hra+da;
	printf("Gross salary is %d",gross_sal);
	return 0;
}
