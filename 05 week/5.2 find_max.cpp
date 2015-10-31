#include <iostream>
using namespace std;
int imax(int a[], int count)
{
	int max=a[0];
	for(int i=1; i<count; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int imin(int a[], int count)
{
	int min=a[0];
	for(int i=1; i<count; i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int main()
{
	int n,a[100],max,min;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	max = imax(a,n);
	min = imin(a,n);
	cout << max << endl;
	cout << min<< endl;
	return 0;
}
