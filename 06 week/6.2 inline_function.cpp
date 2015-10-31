#include <iostream>
using namespace std;

inline int areas(int x, int y)
{
	return x*y;
}
inline int perimeter(int x, int y)
{
	return 2*(x+y);
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << areas(x, y);
	cout << " ";
	cout << perimeter(x,y);

	return 0;
}