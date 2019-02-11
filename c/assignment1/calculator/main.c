#include<stdio.h>
long int res=-1;
int main()
{ int first,second,choice;
 
 do{
     printf("enter the first operand:");
scanf("%d",&first);
 printf("enter the second operand:");
scanf("%d",&second);

printf("1.Addition\n2.subtraction\n3.Division\n4.Multiplication\n5.exit\n");
     printf("enter the desired opertaion\n");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:printf("%ld is the addition\n",add(first,second));
             break;
         case 2:printf("%ld is the subtraction\n",sub(first,second));
             break;
         case 3 :printf("%ld is the division\n",div(first,second));
             break;
         case 4: printf("%ld is the multiplication\n",mul(first,second));
             break;
         case 5:printf("exiting.....\n");
             break;
         default: printf("random choice\n");
             break;
     }
     
 }while(choice!=5);
return 0;
}
