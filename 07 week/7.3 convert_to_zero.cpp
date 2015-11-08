#include <iostream>
using namespace std;

int to_zero(int *pa, int n)
{
	for(int j=0; j<n; j++)
	{
		pa[j] = 0;
	}
	return 0;
}
int main()
{
	int a[100],*pa = a,temp,i=0,n;
	while(1)
	{
		cin >> temp;
		if(temp != -1)
		{
			a[i] = temp;
			i++;
		}
		else
		{
			break;
		}
	}
	cin >> n;
	to_zero(pa,n);
	for(int k=0; k<i-1; k++)
	{
		cout << a[k] << ' ';
	}
	cout << a[i-1];



}	
