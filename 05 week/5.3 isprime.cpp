#include <iostream>
using namespace std;
int isprime(int a)
{
	bool isprime=true;
	if(a==1)
	{
		isprime = false;
	}
	else if(a>2)
	{
for(int i=2; i<a/2; i++)
	{
		if(a%i==0)
		{
			isprime = false;
			break;
		}
		
	}
	}
	
	if(isprime){
		return 1;
	}
	else{
		return 0;
	}
}



int main()
{
	int a[100],b[100],count=0,prime,k=0;
	for(int i=0;;i++)
	{
		cin >> a[i];
		count++;
		if(a[i]==0){
			break;
		}
	}
	for(int j=0;j<count;j++)
	{
		if(isprime(a[j]))
		{
			b[k]=a[j];
			k++;
		}
	}
	for(int m=0;m<k-1;m++)
	{
		cout << b[m];
		if(m!=k-2)
		{
			cout << ' ';
		}
	}
}
