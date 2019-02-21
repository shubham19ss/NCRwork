#include<iostream>
using namespace std;
inline void add(int num1,int num2)
{
	cout<<"Sum of the numbers is "<<num1+num2;
}
inline void sub(int num1,int num2)
{
	cout<<"Subtraction of the numbers is "<<num1-num2;
}
inline void div(int num1,int num2)
{
	if(num2==0)
	{
		cout<<"2nd number can't be 0";
	}
	cout<<"Division of the numbers is "<<num1/num2;
}
inline void modulo(int num1,int num2)
{
	if(num2==0)
	{
		cout<<"2nd number can't be 0";
	}
	cout<<"Modulo of the numbers is "<<num1%num2;
}
inline void mul(int num1,int num2)
{
	cout<<"Multiplication of the numbers is "<<num1*num2;
}
int main()
{
	int num1,num2,select;
	cout<<"Enter first number ";
	cin>>num1;
	cout<<"Enter Second number";
	cin >>num2;
	cout<<"\nSelect any of the operation\n";
	cout<<"1.Addition\n2.Subtraction\n3.Division\n4.Modulus\n5.Multiplication";
	cout<<"\n";
	cin>>select;
	cout<<"\n";
	switch(select)
	{
		case 1:
					add(num1,num2);
					break;
		case 2:
					sub(num1,num2);
					break;
		case 3:
					div(num1,num2);
					break;
		case 4:
					modulo(num1,num2);
					break;
		case 5:
					mul(num1,num2);
					break;
		default:
				cout<<"Select correct option";
	}
	return 0;
}

