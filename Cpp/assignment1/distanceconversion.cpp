#include<iostream>
using namespace std;
class Distance2;
class Distance1
{
	public:
	int mts,cms;
	Distance1(int m,int cm)
	{
		mts=m;
		cms=cm;
	}
	friend void add(Distance1,Distance2,int select);
	

};
class Distance2
{
	public:
	int feet,inch;
	Distance2(int f,int i)
	{
		feet=f;
		inch=i;
	}
	friend void add(Distance1,Distance2,int select);
};
void add(Distance1 d1,Distance2 d2,int select)
{
	int mts,cms;
	double feet,inch;
	int sum_mts,sum_cms,sum_feet,sum_inch;
	if(select==1)
	{
		mts=0.3048*d2.feet;
		cms=2.54*d2.inch;
		sum_cms=cms+d1.cms;
		if(sum_cms>=100)
		{
			int n=sum_cms/100;
			mts=mts+n;
			sum_cms=sum_cms%100;
		}
		sum_mts=mts+d1.mts;
		cout<<"sum is\n"<<sum_mts<<"Meters"<<sum_cms<<"Cms";
	}
	else if(select==2)
	{
		feet=d1.mts/0.3048;
		inch=d1.cms/2.54;
		sum_inch=inch+d2.inch;
		if(sum_inch>=12)
		{
			int n=sum_inch/12;
			feet=feet+sum_inch;
			sum_inch=sum_inch%12;
		}
		sum_feet=feet+d2.feet;
		cout<<"sum is\n"<<sum_feet<<"feet"<<sum_inch<<"inches";
		}
	else
	{
		cout<<"Enter correct number";
	}
}
int main()
{
	int mts,cms,feet,inch,select;
	cout<<"Enter the Distance1 in meters and cms\n";
	cout<<"Meters ";
	cin>>mts;
	cout<<"CentiMeters ";
        cin>>cms;
	cout<<"Enter the Distance2 in feets and inches\n";
        cout<<"feet ";
        cin>>feet;
        cout<<"inches ";
        cin>>inch;
	Distance1 d1(mts,cms);
	Distance2 d2(feet,inch);
	cout<<"Select the units in which output should be displayed\n";
	cout<<"1.Meters-CentiMeters\n";
	cout<<"2.feet-inch\n";
	cin>>select;
	add(d1,d2,select);
}
