#include <iostream>
using namespace std;

int *new_array(int n)
{
	int *p = new int[n];
	return p;
}
void init_array(int *p, int n, int c)
{
	for(int i=0; i<n; i++)
	{
		p[i]=c;
	}
}

int main()
{
	int n,c,*pa;
	cin >> n >> c;
	pa = new_array(n);
	init_array(pa,n,c);
	for(int i=0; i<n; i++)
	{
		if(i!=n-1)
		{
			cout << pa[i] << ' ';
		}
		else cout << pa[i];
	}
}


