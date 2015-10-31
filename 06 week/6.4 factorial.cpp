#include <iostream>
using namespace std;

int factorial(int s,int i)
{
	return s*i;
}
int main()
{
	int n,s=1;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		s = factorial(s,i);
	}
	cout << s;





}
