#include <iostream>
using namespace std;
int mystrrev(char a[], int n, int i)
{
	char temp;
	temp = a[n];
	a[n] = a[i];
	a[i] = temp;
	i++;
	n--;
	if(i < n)
	{
		
		mystrrev(a,n,i);
	}	
}
int main()
{
	char a[100];
	cin.getline(a, 100);
	int count = 0;
	while(a[count]!='\0')
	{
		count++;
	}
	mystrrev(a,count-1,0);
	for(int i=0;i<cnount; i++)
	{
		cout << a[i];
	}
	return 0;
}
