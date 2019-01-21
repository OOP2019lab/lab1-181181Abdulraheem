#include<iostream>
using namespace std;

int main()
{
	int a ;
	cout << "Input any value: ";
	cin >> a;
	for (int i = 1; i <= a; i++)                //UPPER PART
	{
		for (int j = 0; j < i; j++)
		{
			cout << i;
		}
		for (int j = 0; j < 2*(a-i); j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i; j++)
		{	
			cout << i;
		}
		cout << endl;
	}
	for (int x = 1; x < a; x++)             //LOWER PART
	{
		for (int y = 0; y < a-x; y++)
		{
			cout << x + a;
		}
		for (int y = 0; y < 2*x; y++)
		{
			cout << "*";
		}
		for (int y = 0; y < a - x; y++)
		{
			cout << x + a;
		}
		cout << endl;
	}

	return 0;

}