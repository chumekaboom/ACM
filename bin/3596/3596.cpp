#include <iostream>
#include <vector>
using namespace std;

bool supr(string input);

int main()
{
string input;
	getline(std::cin,input);
while(input!="*")
{

if (supr(input))
	cout<<input<<" is surprising.\n";
else 
	cout<<input<<" is NOT surprising.\n";


getline(std::cin,input);
}
}

bool supr(string input)
{
	bool suprise=true;
	int checks=input.size()-1;
	string temp_str;
	string a,b;
	vector<string> pairs;
	for (int k=1;k<=checks;k++)
	{

		for (int i=0;i<input.size()-k;i++)
		{
//			if(input[i]==input[i+k])
//				suprise=false;
//			else
//				{
			a=input[i];
			b=input[i+k];
			temp_str=a+b;
			pairs.push_back(temp_str);
		//	cout<<temp_str<<"\n";
//				}
		}
		for (int i=0;i<pairs.size();i++)
		{
			for (int j=0;j<pairs.size();j++)
			{
				if (pairs[i]==pairs[j]&&i!=j)
				{suprise=false;
				//	cout<<pairs[i]<<" and "<<pairs[j]<<"\n";
				}
			}
		}
		int shit=pairs.size();

		for (int i=0;i!=shit;i++)
		{
			pairs.pop_back();
		}


	}
return suprise;

}

