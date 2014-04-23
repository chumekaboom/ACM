#include <iostream>

using namespace std;

int main()
{
	int cases;
	cin>>cases;
	for(int d=0;d<cases;d++)
		{
		int a,b,c;
		cin>>a>>b>>c;
		if(c==0)cout<<"Gnomes:\n";		
		if((a<b&&b<c)||(a>b&&b>c))cout<<"Ordered\n";
		else  cout<<"Unordered\n";
		} 	
}