#include<iostream>
#include<cmath>
using namespace std;
class point
{
	public:
	int x_cord,y_cord;
	point(int x,int y)
	{
		x_cord=x;
		y_cord=y;
	}
	friend double sum(point,point );
};
double sum(point p1,point p2)
{

	return sqrt(pow(p1.x_cord - p2.x_cord, 2) + pow(p1.y_cord - p2.y_cord, 2));
}
int main()
{
	int x1,y1,x2,y2,distance;
	cout<<"Enter coordinates of point p1\n";
        cin>>x1>>y1;
	cout<<"\nEnter coordinates of point p2\n";
	cin>>x2>>y2;
	point p1(x1,y1);
	point p2(x2,y2);
	cout<<"Distance between two points is "<<sum(p1,p2);
	return 0;
}
