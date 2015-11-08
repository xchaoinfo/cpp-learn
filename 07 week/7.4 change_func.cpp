#include <iostream>
using namespace std;

void caesar(char s[])
{
	int i=0;
	while(s[i] != '\0')
	{
		if(s[i]>=65 and s[i]<=87)
		{
			s[i] = s[i] + 35;
		}
		else if(s[i]>=97 and s[i]<=119)
		{
			s[i] = s[i] - 29;
		}
		else
		{
			switch(s[i])
			{
				case 88: s[i] = 'a'; break;
				case 89: s[i] = 'b'; break;
				case 90: s[i] = 'c'; break;
				case 120: s[i] = 'A'; break;
				case 121: s[i] = 'B'; break;
				case 122: s[i] = 'C'; break;
			}
		}
	
		i++;
	}
}
void oddeven(char s[])
{
	int n=0, k=0;
	char stemp[100];
	while(s[n] != '\0')
	{
		n++;
	}
	for(int i=0; i+1<n; i=i+2)
	{
		stemp[k] = s[i+1];
		s[k] = s[i];
		k++;
	}
	for(int j=0; j<k; j++)
	{
		s[k+j] = stemp[j];
	}
}
void cipher(void (*f)(char s[]), char s[])
{
	(*f)(s);
}


int main()
{
	int i=0, choose;
	void (*f)(char s[]);
	char s[100];
	cin.getline(s,100);
	cin >> choose;
	switch(choose)
	{
		case 1: f=caesar; break;
		case 2: f=oddeven; break;
	}
	cipher(f,s);
	while(s[i] !='\0')
	{
		cout << s[i];
		i++;
	}
}
