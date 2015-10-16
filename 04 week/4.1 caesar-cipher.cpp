#include <iostream>
using namespace std;
int main()
{   //比较乱的代码解决了凯撒加密问题，应该有更简洁的代码
	//等以后重构代码
	char s[10], tmp;
	cin.getline(s,10);
	int i = 0;
	while(s[i]!='\0' && i < 10)
	{
		tmp = s[i];
		if(tmp>=65 && tmp<=87)
		{
			tmp = tmp + 35; 
		}
		else if(tmp>=97 && tmp<=119)
		{
			tmp = tmp -29;
		}
		else
		{
			switch(tmp)
			{
				case 'x':tmp = 'A';break;
				case 'y':tmp = 'B';break;
				case 'z':tmp = 'C';break;
				case 'X':tmp = 'a';break;
				case 'Y':tmp = 'b';break;
				case 'Z':tmp = 'c';break;
			}
		}
		s[i]=tmp;
		cout << tmp;
		i++;
	}
	return 0;
}
