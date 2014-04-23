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
int cases;
cin>>cases;
for(int c=0;c<cases;c++)
	{
	int N,K;
	cin>>N>>K;
	int num=0;
	for(int i=0;i<N;i++)
		{
		int temp;
		cin>>temp;
		num+=temp/K;
		}
	cout<<num<<"\n";
	}
}