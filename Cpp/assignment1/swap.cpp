#include<iostream>
using namespace std;
void swap_value(int a, int b);
void swap_reference(int &p, int &q);
int main()
{
	int m, n,choice;
	cout << "Enter numbers for Swapping" << endl;
	cin >> m >> n;
	cout << "Enter your choice : 1. Swap by Value  2. Swap by Reference";
	cin >> choice;
	switch (choice)
	{
	case 1: 	swap_value(m, n);
		cout << m << endl;
		cout << n;
		break;
	case 2:     swap_reference(m, n);
		cout << m << endl;
		cout << n;
		break;
	default: "enter proper choice";
	}

	
	
	return 0;
}

void swap_value(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
void swap_reference(int &p, int &q)
{
	p = p + q;
	q = p - q;
	p = p - q;
}
