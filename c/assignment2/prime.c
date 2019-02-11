#include<stdio.h>
int main()
{
	int low_limit,up_limit,range,temp_range,count=0;
	printf("Enter the lower limit of the interval  ");
	scanf("%d",&low_limit);
	printf("Enter the upper limit of the interval  ");
        scanf("%d",&up_limit);
	for(range=low_limit;range<=up_limit;range++)
	{
		temp_range=2;
		count=0;
		while(temp_range<=range/2)
		{
		//	printf("%d\n",range);
			if(range%temp_range==0)
			{
				count++;
				break;
			}
			temp_range++;
		}
		if(count==0)
			printf("\n%d",range);

	}
	return 0;
}
