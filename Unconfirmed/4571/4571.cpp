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
	int cases;
	cin>>cases;
	for(int c=0;c<cases;c++)
		{
		int a,b,c;
		cin>>a>>b>>c;
		if(c==0)cout<<"Gnomes:\n";		
		if((a<b&&b<c)||(a>b&&b>c))cout<<"Ordered\n";
		else  cout<<"Unordered\n";
		} 	
}
