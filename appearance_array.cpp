#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int b[15]; // set default all value = 0
void print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i << "appears " << a[i] << "times" << endl;
	}
}
int main()
{
	int a[10] = { 1,2,3,4,1,2,3,2,2,0 };
	int max = *std::max_element(a,a+10); // Find max value of array

	for (int i = 0; i < 10; i++)
	{
		b[a[i]]++;
	}
	print(b, max+1);
	system("pause");
}
