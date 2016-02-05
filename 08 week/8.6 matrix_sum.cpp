#include <iostream>
using namespace std;

	



int main()
{
	int n,isum=0;
	cin >> n;
	int **p = new int*[n];
	for(int i=0; i<n; i++)
	{
		p[i] = new int[n];
	}
	
	for(int j=0; j<n; j++)
	{
		for(int k=0; k<n; k++)
		{
			cin >> p[j][k];
		}
	}
	for(int h=0; h<n; h++)
	{
		isum = isum + p[h][h];

	}
	cout << isum;


}
