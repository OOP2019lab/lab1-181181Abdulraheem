#include <iostream>
#include <fstream>
using namespace std;

int power(int a , int b )
{
	int y = 1;
	for (int i = 0 ; i < b;i++)
    {
	    y = y*a;
	}

	return y;
}
int main()
{
	int a , b, x;
	ifstream read;
	ofstream write;
	write.open("result.txt");
	read.open("input.txt");
	read >> a;
	for (int i = 0 ; i < a ; i++)
	{
		read >> b >> x ;
		cout << power(b,x)<<endl<<endl;
		write  << power(b,x)<<endl<<endl;
	}

	return 0;
}