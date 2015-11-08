#include <iostream>
using namespace std;

void add_array(int a, int *psum)
{
	*psum += a;
}
int main()
{
	int a[100], sum=0, i=0;
	do
	{
		cin >> a[i];
		i++;
	} while (a[i-1] != -1);
	int j=0;
	while(a[j] != -1)
	{
		add_array(a[j], &sum);
		j++;
	}
	cout << sum;
	return 0;
}
