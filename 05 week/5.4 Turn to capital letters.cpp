#include <iostream>
using namespace std;
char turn_capital(char s)
{
	if(s>=97 && s<=122)
	{
		s = s - 32;
	}
	return s;
}
int main()
{
	char a[100];
	int i=0;
	cin.getline(a,100);
	while(a[i]!=0)
	{
		if(a[i]==32 || (a[i]>=65 && a[i]<=90 ))
			{cout << a[i];}
		else if(a[i]>=97 && a[i]<=122)
		{
			cout << turn_capital(a[i]);
		}

		i++;
	}


}