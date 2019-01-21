#include <iostream>
#include <fstream>
using namespace std;

void sort(int a[], int s)
{
	for (int i = 0 ; i < s -1 ; i++)
	{
		for (int j = 0 ; j < s - 1 ; j++)
		{
			if ( *(a+j) > *(a + j + 1) )
			{
				int temp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a + j + 1) = temp;
			}
		}
	}
	ofstream write;
	write.open("results_181181.txt");
	write << "The sorted array is : ";
	for (int i = 0 ; i < s ;i++)
		write << *(a+i)<<" ";

}



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
	sort(a,r);

	return 0;
}
