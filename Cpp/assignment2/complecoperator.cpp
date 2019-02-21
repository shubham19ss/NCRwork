#include<iostream>
using namespace std;
class Complex
{
	public:
	int real,img;
	Complex()
	{
		real=img=0;
	}
	Complex(int val)
	{
		real=img=val;
	}
	Complex(int r,int i)
	{
		real=r;
		img=i;
	}
	~Complex()
	{
	}
	Complex operator + (Complex &c);
	Complex operator - (Complex &c);
	Complex operator -();
	Complex operator ++();
	Complex operator ++(int num);
	Complex operator =(Complex c);
	friend  ostream & operator << (ostream &out, Complex &c);
        friend  istream & operator >> (istream &in,Complex &c);
};
Complex	Complex::operator + (Complex &c)
	{
		Complex r;
		r.real=real+c.real;
		r.img=img+c.img;
		return r;
	}
	 Complex Complex::operator - (Complex &c)
        {
                Complex r;
                r.real=real-c.real;
                r.img=img-c.img;
		return r;
        }
	 Complex Complex::operator -()
	 {
		 return Complex(-real,-img);
	 }
	 Complex Complex::operator ++()
	 {
		 Complex r;
		 r.real=++real;
		 r.img=++img;
		 return r;
		 
	 }
	 Complex Complex::operator ++(int num)
	 {
	 	Complex r;
		r.real=real++;
		r.img=img++;
		return r;
	 }
	 Complex Complex::operator =(Complex c)
	 {
		 real=c.real;
		 img=c.img;
		 return *this;
	 }
	 ostream & operator << (ostream &out, Complex &c)
	 {
		cout<<"number is ";
		cout<<c.real<<"+i"<<c.img<<endl;		
	 }
	 istream & operator >> (istream &in,Complex &c)
	 {
		cout<<"Enter real part of number :";
		cin>>c.real;
		cout<<"Enter imaginary part of number :";
                cin>>c.img;
	}
int main()
{	
	Complex c1,c2(3),c3(2,3),c4;
	cin>>c4;
	c1=c2+c3;
	cout<<c1<<c2;
	return 0;
}

