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
    string s;
    int runs;
    cin>>runs;
    for(int i=0;i<runs;i++)
    {
        cin>>s;
    string op;
    while(cin>>op)
    {
        if(op=="END")break;
        if(op=="I")
        {
            string r;
            int x;
            cin>>r>>x;
            s.insert(x,r);
        }
        if(op=="P")
        {
            int x,y;
            cin>>x>>y;
            cout<<s.substr(x,y-x+1)<<"\n";
        }
    }
    }
}
