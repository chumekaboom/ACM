#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main()
{
string temp;
map<int,char> up;
map<int,char> down;
getline(cin,temp);
for(int i=0;i<32;i++)
	{
	down[i]=temp[i];
	}
getline(cin,temp);
for(int i=0;i<32;i++)
	up[i]=temp[i];


while (getline(cin,temp))
	{
	bool use_down=true;
	int index=0;
	while(index!=temp.size())
		{
		int value_binary=0;
		for(int i=0;i<5;i++)
			{
			value_binary+=(temp[index]-'0')* pow(2,(4-i));
			index++;
			}
		if(value_binary==31)use_down=false;
		else if(value_binary==27)use_down=true;
		else if(use_down) cout<<down[value_binary];
		else cout<<up[value_binary];
		}
	cout<<"\n";
	}
}
