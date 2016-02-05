#include <iostream>
using namespace std;

int main()
{
	char s[100];
	int n=0;
	cin.getline(s,100);
	char *pa=s,*pb=s;
	while(s[n] != '#')
	{
		n++;
	}
	for(int i=0; i<=n; i++)
	{
		if(s[i]!=' ')
		{
			pa += i;
			break;
		}
	}
	for(int j=1; j<n; j++)
	{
		if(s[n-j]!=' ')
		{
			s[n-j+1]='#';
			break;
		}
		
	}
	while(*pa != '#')
		{
			cout << *pa;
			pa++;
		}
		cout << '#';
}
