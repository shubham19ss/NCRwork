#include<iostream>
using namespace std;
class Employee
{

	int id;
	int salary;
public:
	Employee()
	{
		id=salary=0;
         cout<<"default constructor"<<endl;
	}
	Employee(int i,int sal)
	{
	
cout<<"call by value constructor"<<endl;
	}
Employee(Employee &a)
	{
	cout<<"call by reference constructor"<<endl;
	}
	~Employee()
	{
		//destructor is executed
		
cout<<"destructor called"<<endl;
	}
};
int main()	
{          int x=10,y=2000;
	Employee e1,e2(x,y), e3(e2);
	cout<<"Size of e1 is "<<sizeof(e1)<<endl;
	cout<<"Size of e2 is "<<sizeof(e2)<<endl;
	cout<<"Size of e3 is "<<sizeof(e3)<<endl;
	return 0;
}
