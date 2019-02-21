#include<iostream>
using namespace std;
class Employee
{
	public:
	int empno,salary;
	string name;
	Employee()
	{
		empno=salary=0;
	}
	~Employee()
	{cout<<"destructor called"<<endl;
	}
	friend istream & operator >> (istream &in,Employee &E);
};
istream & operator >> (istream &in,Employee &e)
{
	cout<<"Enter employee number :";
	cin>>e.empno;
	cout<<"Enter employee name :";
	cin>>e.name;
	cout<<"Enter employee salary :";
	cin>>e.salary;
}
int main()
{
	Employee e[5];
	for(int i=0;i<5;i++)
		cin>>e[i];
	for(int i=0;i<5;i++)
	{
		cout<<"Employee number is"<<e[i].empno<<endl;
		cout<<"Employee name is "<<e[i].name<<endl;
		 cout<<"Employee salary is "<<e[i].salary<<endl;
	}
	return 0;
}
