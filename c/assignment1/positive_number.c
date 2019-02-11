#include <stdio.h>
 
void main()
{
    int num[100],iter,min,max,count=0,sum=0,temp;
    float average;
 min=1;
    max=0;
    printf("Enter positive numbers\n");
    for(iter=0;iter<100;iter++)
    {
	    scanf("%d",&temp);
	    if(temp<=0)
		    break;
	    else
	    {
	    count++;
	    num[iter]=temp;
   if(min>=num[iter])
		    min=num[iter];
	    if(max<=num[iter])
		    max=num[iter];
	    sum=sum+num[iter];
	    }
    }
   
    
    average=(float)sum/count;
    printf("minimum in the given list is  %d \n",min);
     printf("maximum in the given list is  %d\n",max);
     printf("average of the list is   %f \n",average);
 printf("sum of the list %d \n",sum);
}
