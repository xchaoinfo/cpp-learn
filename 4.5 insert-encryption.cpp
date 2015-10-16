#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;//define string ready to deal with
	char abcde[5]={'a','b','c','d','e'};
	int n, secret,count =0;
	cin >> s;
	cin >> n;
	// get the size of the string while insert finished
	if(s.size()%n == 0)
	{
		secret = s.size() + s.size()/n;	
	}
	else
	{
		secret = s.size() + s.size()/n + 1;
	}
	// start insert 
	for(int i=n; i<secret;i=i+n+1)
	{
		s.insert(i,1,abcde[count%5]);
		count +=1;
	}
	// judge if the last insert needs insert
	if(s.size()%(n+1) != 0)
	{
		s.insert(s.size(),1,abcde[count%5]);
	}
	
	cout << s;



	return 0;
}
