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
string one,two,call;
while(cin>>one>>two>>call)
	{
	if(one=="#"&&two=="#"&&call=="#")break;
	bool even=false;
	if(call[0]=='e')even=true;
	int rolls;
	cin>>rolls;
	int evens=0;
	int odds=0;
	for(int i=0;i<rolls;i++)
		{
		int number;
		cin>>number;
		if(number%2)odds++;
		else evens++;
		}
	if(even)cout<<one<<" "<<odds<<" "<<two<<" "<<evens<<"\n";
	else cout<<one<<" "<<evens<<" "<<two<<" "<<odds<<"\n";
	
	}
}