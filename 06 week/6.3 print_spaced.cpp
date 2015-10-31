#include <iostream>
#include <string>
using namespace std;
void  print_spaced(char a[])
{
	int n=0;
	while(a[n]!='\0')
	{
		n++;
	}
	for(int i=0; i<n; i++)
	{
		cout << a[i];
		if(i!=n-1)
		{
			cout << ' ';
		}
	}
	cout << endl;


}
void  print_spaced(string a)
{
	for(int i=0; i<a.size(); i++)
	{
		cout << a[i];
		if(i!=a.size()-1)
		{
			cout << ' ';
		}
	}
	
}
int main()
{
	char a[100];
	string s;
	cin >> a;
	cin >> s;
	print_spaced(a);
	print_spaced(s);

}
