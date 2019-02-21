#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class String
{
	public:
	char *str;
	int len;
	String()
	{
		str=NULL;
		len=0;
	}
	String(char *s,int l)
	{
		len=l;
		str=(char *)malloc(sizeof(char)*(len+1));
		strcpy(str,s);
	}
	String(String &s)
	{
		str=s.str;
		len=s.len;
	}
	~String()
	{
	}
	String operator+(String s);
	String operator=(String s);
	char operator[](int i);
	friend  ostream & operator << (ostream &out, String &s);
        friend  istream & operator >> (istream &in,String &s);
};
String String::operator+(String s)
{
	String s3;
	int a,b,i,j,c;
	a=strlen(s.str)-1; 
	b= len;
	c=a+b;
	s3.str=(char *)malloc(sizeof(char)*(a+b+1));
	for(i=0;i<=a;i++)
		s3.str[i]=str[i];
	for(j=0;j<=b;j++)
		s3.str[i+j]=s.str[j];
	s3.str[i+j]='\0';
	return s3;
}
String String::operator=(String s)
{
	str=(char*)malloc(sizeof(char)*strlen(s.str)+1);
	strcpy(str,s.str);
	return *this;
}

char String::operator[](int i)
{
	return this->str[i];
}
ostream & operator << (ostream &out, String &s)
{
	cout<<"String is :"<<s.str<<endl;
	return cout;
}
istream & operator >> (istream &in,String &s)
{
	char temp[100];
	cin>>temp;
	s.str=(char *)malloc(sizeof(strlen(temp)+1));
	strcpy(s.str,temp);
	return cin;
}
int main()
{
	String s1,s2("abcd",4),s3,s4;
	cout<<"Enter one string"<<endl;
	cin>>s3;
	s4=s3;
	cout<<s3<<s4;
	cout<<"Index at 1 is :"<<s3[1];
	return 0;
}
