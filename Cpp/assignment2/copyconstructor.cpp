#include<iostream>
using namespace std;
class Situation
{

	int x,y;
	public:
		Situation()
		{
			x=y=0;
		}
		Situation(int p,int q)
		{x=p;
y=q;
			
		}
		Situation(const Situation &p)
		{
			cout<<"copy constructor invoked\n";
			x=p.x;
			y=p.y;
		}
		
		void display();
		~Situation()
		{}
};
void Situation::display()
{
	cout<<"x= "<<x<<"\ny= "<<y<<endl;
}
int main()
{
	
	Situation a(2,5);
	Situation b=a,c(a);
	a.display();
	b.display();
	c.display();
	return 0;
}
