#include <iostream>
using namespace std;
int main()
{
	char a[12][8] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
	char (*p)[8] = a;
	int count;
	cin >> count;
	cout << p[count-1];
	
	return 0;


}
