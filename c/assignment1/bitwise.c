#include<stdio.h>
int main()
{
  int val=0xCAFE,reverse,rotate;
  int temp;
  temp=(val&0xF);
  if(temp==0x7||temp==0xB||temp==0xD||temp==0xE||temp==0xF)
   printf("on\n");
  else
    printf("off\n");
   reverse=((0xFF &val)<<8)|(val>>8);
   printf("%X\n",reverse);
   rotate=(val>>4)|((val&0xF)<<12);
   printf("%X",rotate);
}
