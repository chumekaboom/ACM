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
        int u;
        int m;
        cin>>u>>m;
        vector<vector<string> > bids;
        bids.resize(m);
        for(int j=0;j<m;j++)
        {
        string name;
        int index;
        cin>>name>>index;
        bids[index-1].push_back(name);
        }
        int an=0;
        int min_count=m;
        for(int j=0;j<m;j++)
        {
            if(bids[j].size()!=0&&bids[j].size()<min_count)
            {
                min_count=bids[j].size();
                an=j;
            }
        }
        cout<<"Case "<<i+1<<":\nThe winner is "<<bids[an][0]<<".\nThe price is "<<an+1<<".\n";
        if(i!=cases-1)
            cout<<"\n";
    }

}
