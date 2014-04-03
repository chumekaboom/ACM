#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int input;
	cin>>input;
	while(input!=-1)
	{
		vector<int> list;
		while(input!=0)
		{
		list.push_back(input);
		cin>>input;
		}
	int count=0;
	for (int i=0;i<list.size();i++)
	{
		for(int j=0;j<list.size();j++)
		{
			if (list[i]==list[j]*2)
				count++;
		}
	}
	cout<<count<<"\n";
	cin>>input;
	}
}

