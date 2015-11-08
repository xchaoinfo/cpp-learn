#include <iostream>
using namespace std;

void reset(int *a, int *b)
{
	int isum;
	isum = *a+*b;
	if(isum%2 != 0)
	{
		isum++;
	}
	*a = isum/2;
	*b = isum/2;
}
int main()
{
	int a,b;
	cin >> a >> b;
	reset(&a,&b);
	cout << a << ' ' << b;

}
