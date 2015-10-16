#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n>=1 && n<=7)
	{
		switch(n)
		{
			case 1:cout<<"monday";break;
            case 2:cout<<"tuesday";break;
            case 3:cout<<"wednesday";break;
            case 4:cout<<"thursday";break;
            case 5:cout<<"friday";break;
            case 6:cout<<"saturday";break;
            case 7:cout<<"sunday";break;
		}
	}
	else
	{
		cout << "invalid";
	}
	return 0;
}
