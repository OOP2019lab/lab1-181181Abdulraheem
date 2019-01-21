#include <iostream>
using namespace std;

int main()
{
	int x,y,*p,*q;
	x = 5;
	y = 6;
	p = &x;
	q = &y;
	cout << "The value of x is: "<<x<<endl;
	cout << "The value of y is: "<<y<<endl;
	cout << "The value of p is: "<<p<<endl;
	cout << "The value of q is: "<<q<<endl;
	cout << "The value of *P is: "<<*p<<endl;
	cout << "The value of *q is: "<<*q<<endl;
	cout << endl;
	int z;
	z = x; 
	x = y; 
	y = z;
	cout << "The value of x is: "<<x<<endl;
	cout << "The value of y is: "<<y<<endl;
	cout << "The value of p is: "<<p<<endl;
	cout << "The value of q is: "<<q<<endl;
	cout << "The value of *P is: "<<*p<<endl;
	cout << "The value of *q is: "<<*q<<endl;
	cout << endl;
	int *r;
	r = p; 
	p = q; 
	q = r;
	cout << "The value of x is: "<<x<<endl;
	cout << "The value of y is: "<<y<<endl;
	cout << "The value of p is: "<<p<<endl;
	cout << "The value of q is: "<<q<<endl;
	cout << "The value of *P is: "<<*p<<endl;
	cout << "The value of *q is: "<<*q<<endl;
	cout << endl;
	return 0;
}