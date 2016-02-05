#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	double res;
	cin >> a;
	res = sqrt(a);
	cout.setf(ios::fixed);
	for(int i=1; i<=6; i++)
	{
		cout.precision(i);
		cout << res << endl;
		
	}

	return 0;
}