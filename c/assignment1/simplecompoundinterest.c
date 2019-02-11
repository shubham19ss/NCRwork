#include<stdio.h>
long double power(long double result,long int exponent)
{
	long double res=1;
	long int iter;
	for( iter=1;iter<=exponent;iter++)
		res*=result;
	return res;
}
int main(int argc, char const *argv[])
{
	long double rate=5;
	long int principal=5000000;
	long int time=10;
	printf("Simple Interest is:  ");
	long double simpleinterest=((long double)principal*rate*time/100);
	printf("%Lf\n",simpleinterest);
	long double compoundinterest;
	printf("Compound Interest when computed  annually is:  ");
	compoundinterest=((power((1+rate/100.0),time)*principal)- principal);
	printf("%Lf\n",compoundinterest);
	printf("Compound Interest when computed semi-annually is:  ");
	compoundinterest=((power((1+rate/200.0),2*time)*principal)-principal);
	printf("%Lf\n",compoundinterest);
	printf("Compound Interest when computed quarterly is:  ");
	compoundinterest=((power((1+rate/400.0),4*time)*principal)- principal);
	printf("%Lf\n",compoundinterest);
	printf("Compound Interest when computed monthly is:  ");
	compoundinterest=((power((1+rate/1200.0),12*time)*principal)- principal);
	printf("%Lf\n",compoundinterest);
	printf("Compound Interest when compputed daily is:  ");
	compoundinterest=((power((1+rate/36500.0),365*time)*principal)- principal);
	printf("%Lf\n",compoundinterest);
	return 0;
}
