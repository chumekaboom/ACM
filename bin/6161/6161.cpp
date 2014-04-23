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

int main()
{
int runs;
string rune;
getline(cin,rune);
stringstream ss;
ss<<rune;
ss>>runs;
for(int r=0;r<runs;r++)
	{
	string bits;
	getline(cin,bits);
	if(bits[bits.size()/2]==bits[bits.size()/2-1])cout<<"Do-it\n";
	else cout<<"Do-it-Not\n";
	
	}
}