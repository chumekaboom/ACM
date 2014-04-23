#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{

int input_a,input_b;
cin>>input_a;
cin>>input_b;
while (input_a!=0&&input_b!=0)
{
int closest=1;
int record_min=INT_MAX;
for (int i=1;i<1000001;i++)
{
if(abs(pow(i,input_b)-input_a)<record_min)
	{closest=i;
	record_min=abs(pow(i,input_b)-input_a);
	if (record_min==0)
		break;
	}

}
cout<<closest<<"\n";





cin>>input_a;
cin>>input_b;
}



}
