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
#include <set>

#include <iomanip>
using namespace std;
void ip(string temp)
{
vector<int> numbers;
numbers.resize(4);
int current=0;
for(int i=0;i<4;i++)
	for(int j=7;j>=0;j--)
		{
		numbers[i]+=pow(2,j)*(temp[current]-'0');
		current++;
		}
cout<<numbers[0]<<'.'<<numbers[1]<<'.'<<numbers[2]<<'.'<<numbers[3]<<"\n";
}
int main()
{
int runs;
string temper;
getline(cin,temper);
stringstream ss;
ss<<temper;
ss>>runs;
for(int i=0;i<runs;i++)
	{
	string temp;
	getline(cin,temp);
	ip(temp);
	}
}
