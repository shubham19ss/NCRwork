#include<iostream>
using namespace std;
class Student
{
	
	int rollno,marks[6],total_marks;
	char grade;
	string name;
	public:
	friend void generate_results(Student[],int n);
	friend istream & operator >> (istream &in,Student &s);
	friend ostream & operator << (ostream &out,Student &s);
};
istream & operator >> (istream &in, Student &s)
{
	int i=0;
	cout<<"Enter Roll No ";
	cin>>s.rollno;
	cout<<"Enter Name of the Student";
	cin>>s.name;
	for(i=0;i<6;i++)
	{
		cout<<"Enter Marks obtained in subject "<<i+1<<"  ";
		cin>>s.marks[i];
	}
	return cin;
}
ostream & operator << (ostream &out,Student &s)
{
	int i;
	cout<<"Name of the student is "<<s.name<<endl;
	cout<<"RollNo of the student is "<<s.rollno<<endl;
	for(i=0;i<6;i++)
		cout<<"Marks obtained in subject "<<i+1<<"is "<<s.marks[i]<<endl;
	cout<<"Total marks :"<<s.total_marks<<endl;
	cout<<"Grade :"<<s.grade<<endl;
}
void generate_results(Student s[],int n)
{
	for(int i=0;i<n;i++)
	{
		s[i].total_marks=s[i].marks[0]+s[i].marks[1]+s[i].marks[2]+s[i].marks[3]+s[i].marks[4]+s[i].marks[5];
		if(s[i].total_marks>=540)
		{
			s[i].grade='A';
		}
		else if(s[i].total_marks>=480)
		{
			s[i].grade='B';
		}
		 else if(s[i].total_marks>=420)
                {
                        s[i].grade='c';
                }
		  else if(s[i].total_marks>=360)
                {
                        s[i].grade='D';
                }
		  else if(s[i].total_marks>=300)
                {
                        s[i].grade='E';
                }
		  else
  		{
                        s[i].grade='F';
                }
	}
}
int main()
{
	int n;
	cout<<"Enter the number of students ";
	cin>>n;
	Student s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	generate_results(s,n);
	for(int i=0;i<n;i++)
		cout<<s[i];
	return 0;
}
