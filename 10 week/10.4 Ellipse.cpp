#include <iostream>
using namespace std;

class Ellipse
{
	int x1,y1;
	double xlong,xshort;
public:
	Ellipse(int x,int y,double l, double s)
	{
		x1 = x;
		y1 = y;
		xlong = l;
		xshort = s;	
	}
	double Area()
	{
		return 3.14 * xlong * xshort;
	}

};

int main()
{
	int x,y;
	double l,s;
	cin >> x >> y >> l >> s;
	Ellipse ell(x,y,l,s);
	cout << ell.Area();
	


	return 0;
}
