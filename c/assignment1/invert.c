#include<stdio.h>
#include<math.h>
#define INIT 32

int invertponwards(int n,int p,int nbit)
{

	int num_of_bits=(int)log2(n)+1;
int arr[num_of_bits],iter,temp,rem,base=1,dec_num=0;
temp=n;
    for(iter=0;iter<num_of_bits;iter++)
          {arr[iter]=temp%2;
              temp=temp/2;
               }
       for(iter=p-1;iter<nbit;iter++)
	       arr[iter]=!arr[iter];
       for(iter=num_of_bits-1;iter>=0;iter--)
       {
	      int rem=arr[iter];
	     dec_num+=rem*base;
	      	    base*=2; 
       }
       return dec_num;
           
}

int main()
{
	int num,result,bit,nbit;
	printf("Enter number ");
	scanf("%d",&num);
	printf("Enter the bit position  ");
	scanf("%d",&bit);
	printf("Enter number of bits");
	scanf("%d",&nbit);
	result=invertponwards(num,bit,nbit);
	printf("inverted number is %d",result);
	return 0;
}

