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
bool pal(string a)
{
    string b;
    b=a;
    reverse(b.begin(),b.end());
    return b==a;
}
vector<char> alphebet{'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
bool base(int b,int number)
{
      std::string result;
    while(number)
    {
        result += alphebet[number % b];
        number /= b;
    }
    reverse(result.begin(),result.end());
    return pal(result);

}

int main()
{

int input;
while(cin>>input)
{
    if(input==0)break;
    vector<int> bases;
    for(int i=2;i<17;i++)
    {
        if(base(i,input))
            {
            bases.push_back(i);
            }
    }
    if(bases.size())
    {
        cout<<"Number "<<input<<" is palindrom in basis";
        for(int i=0;i<bases.size();i++)
            cout<<" "<<bases[i];
        cout<<"\n";
    }
    else cout<<"Number "<<input<<" is not palindrom\n";

}



}
