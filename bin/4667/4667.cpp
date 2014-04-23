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
int  p[12]= { 2,3,5,7,13,17,19,31,61,89,107,127 };
int main()
{

int input;
while(cin>>input)
{
    if(input==0)break;
	if(std::binary_search (p, p+12, input))cout<<input<<":Prime\n";
	else cout<<input<<":NotPrime\n";
}
}
