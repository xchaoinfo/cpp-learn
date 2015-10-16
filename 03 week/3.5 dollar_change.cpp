#include <iostream>
using namespace std;
//这段代码，写得有点冗长，以后考虑重构
int main()
{
	int n, count=0;
	cin >> n;
	if(n<=99 && n>=0)
	{
		for(int i=0; i <= n/25; i++)
		{
			for(int j=0; j<=n/10; j++)
			{
				for(int k=0; k<=n/5; k++)
				{
					for(int m=0; m<=99; m++)
						if(n == (i*25+j*10+k*5+m))
						{
							count =		 count + 1;
						}
				}
			}
		}
	cout << count;
	}
	else
	{
		cout << "the money is invalid!";
	}
	return 0;
}
