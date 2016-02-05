#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream f("A.txt");
	if(!f)
	{
		cout << "can't open file";
		return 1;
	}
	char s[5][80];
	for(int i=0; i<5; i++)
	{
		cin.getline(s[i],80);
		f << s[i]<<endl;
	}
	f.close();

	ifstream fi("A.txt");
	char c[80];
	for(int j=0; j<5; j++)
	{
		while(fi)
		{
			char c=fi.get();
			cout << c;
			if(c=='\n')
			{
				
				continue;
			}
			
		}
	}
	fi.close();



}
