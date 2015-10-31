#include <iostream>
using namespace std;
int find_max(int arr[],int n)
{
	int temp;
	if((n-1)==0)
	{
		return arr[0];
	}
	else
	{
		if(arr[n-2] < arr[n-1])
		{
			arr[n-2] = arr[n-1];
		}
		find_max(arr, n-1);
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	cout << find_max(arr, n);

}
