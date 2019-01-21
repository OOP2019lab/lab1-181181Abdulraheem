#include <iostream>
using namespace std;

int main()
{
	int r;
	cout << "Enter the size of array: ";
	cin >> r;
	int *a = new int [r];
	cout << "Enter the values in array\n";
	for (int i = 0 ; i < r ;i++)
	cin >> a[i];
	for (int i = 0 ; i < r -1 ; i++)
	{
		for (int j = 0 ; j < r - 1 ; j++)
		{
			if ( a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	cout << "The sorted array is : ";
	for (int i = 0 ; i < r ;i++)
		cout << a[i]<<" ";

	return 0;
}
