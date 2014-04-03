#include <iostream>
using namespace std;

int rounding(int input);
int main()
{
	int numb;
	cin>>numb;
	int input;
	int output;
	for(int k=0;k<numb;k++)
	{
	cin>>input;
	output=rounding(input);
	cout<<output<<"\n";
	}
}
int rounding(int input)
{
	int output;
	int k=1;
	for(int i=10;i<=input;i=i*10)
	{		
		if ((i-input%(i))<=5*(i/10))
			input=input+(i-input%(i));
		else if ((i-input%(i))>5*(i/10))
			{	
				input=input-(input%(i));
			}
	}


return input;
}
