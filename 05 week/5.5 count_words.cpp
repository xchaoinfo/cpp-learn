#include <iostream>
using namespace std;
bool is_item(char a)
{
	if((a>=97 && a<=122)||(a>=65 && a<=90))
		{return 1;
		}
	else 
	{return 0;
		}	
}
int main()
{
	char s[500];
	int i=0,count=0;
	cin.getline(s,500);
	while(s[i]!='\0')
	{
		if(is_item(s[i]) && is_item(s[i+1])==0)
		{count++;
			}	
		i++;
	}
	cout << count;
	return 0;
}
