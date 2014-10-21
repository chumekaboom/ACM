#include <iostream>

using namespace std;
int main()
{
	string input;
	while (getline(std::cin,input))
	{
	if (input=="#")
		break;
	int value=0;
	for(int i=0; i<input.size();i++)
		if(input[i]!=' ')
			value=value+(input[i]-64)*(i+1);
	std::cout<<value<<"\n";
	}
}
