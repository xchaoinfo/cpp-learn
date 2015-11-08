#include <iostream>
#include <cmath>
using namespace std;

int a,b,c,m;

int  func1(int x)
{
	return a*(x*x) + b*x + c;
}
int  func2(int x)
{
	return pow(x,m);
}
int avg( int (*f)(int),int x1,int x2)
{
	int n=x2-x1+1, isum=0;
	for(x1; x1<=x2; x1++)
	{
		isum = isum + (*f)(x1);
	}
	return isum/n;
}



int main()
{
	int x1, x2;
	cin >> a >> b >> c;
	cin >> m;
	cin >> x1 >> x2;
	int (*f1)(int);
	int (*f2)(int);
	f1 = func1;
	f2 = func2;
	cout << avg(f1,x1,x2) << endl;
	cout << avg(f2,x1,x2);


	return 0;
}
