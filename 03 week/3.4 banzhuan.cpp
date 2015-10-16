#include <iostream>
using namespace std;
int main()
{
	int n;
	int count = 0; 
	cin >> n;
	for(int i = 0; i <= n/4; i++)
	{
		for(int j=0; j <= n/3; j++)
		{
			if(n == (4*i + 3*j + (double)(n-i-j)/2))
				{
					cout << "men" << i << endl;
					cout << "women" << j << endl;
					cout << "children" << n-i-j << endl;
					count = count + 1;
				}
	
		}
	}
	if (count == 0)
	{
		cout << "no result!" << endl;;
	}

	return 0;
}
