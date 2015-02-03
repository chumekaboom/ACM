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

int main()
{
 int cases;
 cin>>cases;
 for(int i=0;i<cases;i++)
 {
     int value;
     cin>>value;
     int q=value/25;
     value-=25*q;
     int d=value/10;
     value-=10*d;
     int n=value/5;
     value-=5*n;
     cout<<i+1<<" "<<q<<" QUARTER(S), "<<d<<" DIME(S), "<<n<<" NICKEL(S), "<<value<<" PENNY(S)\n";

 }

}
