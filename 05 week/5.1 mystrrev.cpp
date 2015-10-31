#include <iostream>
using namespace std;
void mystrrev(char a[])
{
	int n=0;
	char tep;
	while(a[n] != '\0')
	{
		n = n+1;
	}
	for(int i=0; i<=(n-1)/2; i++)
	{
		tep = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = tep;		
	}
	
}
int main()
{
	char a[100];
	int i = 0;
	cin.getline(a, 100);
	mystrrev(a);
	while(a[i]!='\0')
	{
		cout << a[i];
		i++;
	}
	return 0;
}
