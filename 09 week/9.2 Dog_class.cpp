#include <iostream>
#include <cstring>
using namespace std;

class Dog
{
	private:
		char name[100];
		int age;
		char sex;
		float weight;
	public:
		void setdata(char *p, int a, char s, float w)
		{
			strcpy(name, p);
			age = a;
			sex = s;
			weight = w;
		};
		void GetName(){cout << name;};
		void GetAge(){cout << age;};
		void GetSex()
		{
			if(sex=='f') cout << "female";
			else cout << "male";
		};
		void GetWeight(){cout << weight;};
};

int main()
{
	Dog dog1;
	char n[100],s;
	int a;
	float w;
	cin >> n >> a >> s >> w;
	dog1.setdata(n,a,s,w);
	cout << "It is my dog." << endl;
	cout << "Its name is "; dog1.GetName(); cout << "." << endl;
	cout << "It is "; dog1.GetAge() ;cout << " years old." << endl;
	cout << "It is ";dog1.GetSex(); cout  << "." << endl;
	cout << "It is " ; dog1.GetWeight(); cout << " kg.";


	return 0;
}
