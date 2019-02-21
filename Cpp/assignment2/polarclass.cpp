#include<iostream>
using namespace std;
class Point
{       int angle,radius;
	public:
		static int count;
	Point()
	{
		angle=radius=0;
		count++;
	}
	Point(int angl,int rad)
	{
		angle=angl;
		radius=rad;
		count++;
	}
	~Point()
	{
		count--;
	}
};
int Point::count=0;
int main()
{
	Point p1,p2,p3;
	cout<<"number of active objects are ";
	cout<<Point::count<<"\n";
	Point p4(60,3),p5(30,4),p6(90,2);
	p1.~Point();
	cout<<"number of active objects are ";
	cout<<Point::count;
}
