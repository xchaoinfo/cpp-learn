#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int *p = new int[n];
	for(int i=1; i<=n; i++)
	{
		p[i-1] = i;
	}
	for(int j=0; j<n; j++)
	{
		if(j<n-1)
		{
			cout << p[j] << ' ';
		}
		else cout << p[j];
	}
		
}
