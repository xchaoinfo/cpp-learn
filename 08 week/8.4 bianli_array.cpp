#include <iostream>
using namespace std;

int main()
{
	int m,n, isum=0;
	cin >> m >> n;
	int **p = new int*[m];
	for(int i=0; i<m; i++)
	{
		p[i] = new int[n];
	}
	for(int j=0; j<m; j++)
	{
		for(int k=0; k<n; k++)
		{
			cin >> p[j][k];
		}
	}
	for(int h=0; h<m; h++)
	{
		for(int l=0; l<n; l++)
			isum = isum + p[h][l];
	}
	cout << isum;

	return 0;
}
