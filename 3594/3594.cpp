#include <iostream>

using namespace std;
int main()
{
string input;
getline(std::cin,input);

while (input!="#")
{
int value=0;
for(int i=0; i<input.size();i++)
{
if (isupper(input[i]))
	value=value+(input[i]-64)*(i+1);
if (islower(input[i]))
	value=value+(input[i]-96)*(i+1);

}
std::cout<<value<<"\n";

getline(std::cin,input);
}






}
