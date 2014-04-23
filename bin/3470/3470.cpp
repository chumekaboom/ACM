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
int N,D;
while(cin>>N>>D)
{
if(D==0&&N==0)break;
bool perfect=false;
vector<int> counter;
counter.resize(N,0);
for(int i=0;i<D;i++)
	{
	for(int j=0;j<N;j++)
		{
        int attend;
		cin>>attend;
		counter[j]=counter[j]+attend;
		}
	}
for(int i=0;i<N;i++)
	{
	if(counter[i]==D) perfect=true;
	}
if(perfect) cout<<"yes\n";
else cout<<"no\n";
}
}
