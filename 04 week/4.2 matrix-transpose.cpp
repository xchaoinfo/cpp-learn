#include <iostream>
using namespace std;
int main()
{
	int n,m[4][4];
	cin >> n; 
	if(n == 4)
	{
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
				cin >> m[i][j];
			}
		}
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<i; j++)
			{
				int tmp;
				tmp = m[i][j];
				m[i][j] = m[j][i];
				m[j][i] = tmp;
			}
		}
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
				if(i==3 && j==3	)
				{
					cout << m[i][j];
				}
				else
			cout<< m[i][j]<< " ";
			}
		}
	
		

	}
	else
	{
		cout << "only handle fourth order matrix" <<endl;
	}
	return 0;
}
