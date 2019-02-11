#include<stdio.h>
void binhex(){
	int bin_num,hex_num=0,temp_num,base=1;
printf("Enter binary number in 0's and 1's");
		scanf("%d",&bin_num);
		temp_num=bin_num;
		while(temp_num!=0)
		{
			int rem=temp_num%10;
			hex_num=hex_num + rem*base;
			base=base*2;
			temp_num=temp_num/10;
		}
		printf("HexaDecimal Value of given binary number is %x",hex_num);


}
void hexbin()
{ 
	 char  hexa[100];
    long int i = 0;
 
    printf("Enter the value for hexadecimal ");
    scanf("%s", hexa);
    printf("\n Equivalent binary value: ");
    while (hexa[i])
    {
        switch (hexa[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        case 'a':
            printf("1010"); break;
        case 'b':
            printf("1011"); break;
        case 'c':
            printf("1100"); break;
        case 'd':
            printf("1101"); break;
        case 'e':
            printf("1110"); break;
        case 'f':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", hexa[i]);
            break;
        }
        i++;
    }
    
}
int main()
{
	int select;

	printf("1: binary to hexadecimal\n2: hexadecimal to binary\nSelect one:  ");
	scanf("%d",&select);
	switch(select)

{
case 1:binhex();
break;
case 2: hexbin();
break;
default: printf("invlaid choice");
break;
}
return 0;
}
