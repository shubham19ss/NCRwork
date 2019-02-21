#include<iostream>
#include<cstring>
#include<malloc.h>
using namespace std;
class student
{ public:
	char * s;
	char *grade;
	int *marks;
};
class collegecourse
{        student stu;
	public:
		void set_data(char name[],int marks1,int marks2,int marks3)
		{int len=strlen(name)+1;
			stu.s=(char*)malloc(len*sizeof(char));
			strcpy(stu.s,name);
			stu.marks=(int *)malloc(3*sizeof(int));
			stu.grade=(char *)malloc(15*sizeof(char));
			stu.marks[0]=marks1;
			stu.marks[1]=marks2;
			stu.marks[2]=marks3;			

		}
		float calculateaverage()
		{
                     float avg=(stu.marks[0]+stu.marks[1]+stu.marks[2])/(float)3;
	 		return avg;	     
		}
		void computegrade()
		{                                  
			float avg=calculateaverage();
			if(avg>60.0)
				strcpy(stu.grade,"first class");
			else if(avg>=50.0 && avg<60.0)
				strcpy(stu.grade,"second class");
			else if(avg>=40.0 && avg<50.0)
				strcpy(stu.grade,"third class");
			else
				strcpy(stu.grade,"FAIL");
		}
		void display()
		{
			cout<<stu.s<<endl;
			cout<<stu.marks[0]<<" "<<stu.marks[1]<<" "<<stu.marks[2]<<endl;
			cout<<stu.grade<<endl;
		}

};
int main()
{
collegecourse c1;
c1.set_data("shubham",100,20,30);
c1.computegrade();
c1.display();
}

