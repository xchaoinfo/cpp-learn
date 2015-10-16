#include <iostream>
#include <string>
using namespace std;
// learn how to use struct
struct SongInfo
{
	string song;
	string singer;
	int click;
};
int main()
{
	struct SongInfo songlist[5], tmp;
	// input songinfo
	for(int i=0; i<5; i++)
	{
		 cin >> songlist[i].song;
		 cin >> songlist[i].singer;
		 cin >> songlist[i].click;
	}
	// order the click number
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<4-i; j++)
		{
			if(songlist[j].click < songlist[j+1].click)
			{
				tmp = songlist[j];
				songlist[j] = songlist[j+1];
				songlist[j+1] = tmp;
			}
		}
	}
	// print out the result
	for(int i=0; i<5; i++)
	{
		 cout << songlist[i].song << ' ';
		 cout << songlist[i].singer << ' ';
		 cout << songlist[i].click;
		 if(i!=4)
		 {
		 cout << endl;
		 }
		 
		 ;
	}

	return 0;
}
