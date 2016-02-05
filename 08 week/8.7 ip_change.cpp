#include <iostream>
using namespace std;


// count the len of the array;
int count_len(char ip_arr[])
{
	int count_len=0;
	while(ip_arr[count_len]!='\0')
	{
		count_len++;
	}
	return count_len;
}
// str_arr to num_arr;
int  str_to_num(char num_str[])
{
	return (num_str[0]-48)+10*(num_str[1]-48) + 100*(num_str[2]-48);
}

// 判断输入的是否是数字和 '.'， 是否有连续两个输入的 '.'
bool if_input(char ip_arr[])
{
	int n=count_len(ip_arr),count_dot;
	for(int i=0; i<n; i++)
	{
		if(ip_arr[i]=='.')
		{
			count_dot++;
			if(i==0 || i==n-1) return false;
			else
			{
				if(i<n-1 && ip_arr[i]==ip_arr[i+1])
					return false;
			}
		}
		else
		{
			if(ip_arr[i]>57 || ip_arr[i]<48)
				return false;
		}
	}
	if(count_dot!=3) return false;
	return true;
}
void split_arr(int *p, char ip_arr[])
{
	char temp[3];
	int a[5],a_i=1;
	a[0]=-1;
	a[4]=count_len(ip_arr);
	for(int k=0; k<count_len(ip_arr); k++)
	{
		if(ip_arr[k]=='.') 
		{
			a[a_i] = k;
			a_i++;
		}
	}
	for(int ii=0; ii<4; ii++)
	{
		for(int hh=0; hh<3; hh++)
		{
			temp[hh]='0';
		}	
		for(int jj=1; jj<a[ii+1]-a[ii]; jj++)
		{
			temp[jj-1]=ip_arr[a[ii]+jj];
		}
		p[ii] = str_to_num(temp);
	}
}
void change_to_2(int *ps, int num)
{
	int mtemp, ntemp;
	ntemp = num/2;
	mtemp = num%2;
	*ps = mtemp;
	ps = ps -1;
	if(ntemp != 0)
	{
		
		change_to_2(ps,ntemp);
	}
}
int change_num_sort(int num_to_sort)
{
	if(num_to_sort/10 == 0) return num_to_sort;
	else
	{
		if(num_to_sort/100 == 0)
		{
			return 10*(num_to_sort%10) + num_to_sort/10;
		}
		else return 100*(num_to_sort%10)+ 10*(num_to_sort/10%10)+num_to_sort/100;
	}
}


int main()
{
	char ip_arr[15];
	int ip_split[4],si[8];
	int *p= ip_split;
	cin.getline(ip_arr,15);

	if(if_input(ip_arr))
	{
	
	split_arr(p,ip_arr);
	for(int mm=0; mm<4; mm++)
	{
		for(int kii=0; kii<8; kii++)
		{
			si[kii]=0;
		}
		int *ps = &si[7];
		
		change_to_2(ps,change_num_sort(ip_split[mm]));
		for(int mii=0; mii<8; mii++)
		{
			cout << (char)(si[mii]+48);
		}
		//cout << change_num_sort(ip_split[mm])<< endl;;
	}
	}
	else cout << "data error";
}











