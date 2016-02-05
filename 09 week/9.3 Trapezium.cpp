#include <iostream>
#include <cstring>
using namespace std;
// 这个函数没有定义好，以后复习的时候，通过新的方法将这个实现。
class Trapezium
{
	private:
		int x1,y1;
		int x2,y2;
		int x3,y3;
		int x4,y4;
	public:
		void initia(int ix1,int iy1,int ix2,int iy2,int ix3,int iy3,int ix4,int iy4)
		{
			x1 = ix1; y1 = iy1;
			x2 = ix2; y2 = iy2;
			x3 = ix3; y3 = iy3;
			x4 = ix4; y4 = iy4;
		}
		void GetPosition(int&,int&,int&,int&,int&,int&,int&,int&)
		{

		}
		int Area()
		{
			return ((x2-x1)+(x4-x3))*(y1-y3)/2;
		}
};


int main()
{
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	Trapezium trap;
	trap.initia(x1,y1,x2,y2,x3,y3,x4,y4);
	cout << trap.Area();
}
