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

	int pages,a,min,max,num_p,p_page,test,b,c;
	
	while(cin>>pages)
	{
		if(pages==0)break;
		cin>>test;
		num_p=pages/4;
		if (test%2==0)
		{
			a=test-1;
			max=test;
			min=a;
		}
		else
		{
			a=test+1;
			max=a;
			min=test;	
		}
		if(test<=num_p*2)
		{
			p_page=max/2;
			b=max+(num_p-p_page)*4+1;
			c=max+(num_p-p_page)*4+2;
			cout<<a<<" "<<b<<" "<<c<<"\n";
		}
		else 
		{
			p_page=2*num_p-((max/2)-1);
			b=max-(num_p-p_page)*4-2;
			c=max-(num_p-p_page)*4-3;
			cout<<c<<" "<<b<<" "<<a<<"\n";
		}
	}

}
