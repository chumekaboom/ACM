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
    vector<int> T;
    T.resize(302);
    for(int i=1;i<T.size();i++)
        T[i]=(i+1)*(i+2)/2*(i)+T[i-1];
    for(int i=0; i<cases; i++)
    {
        int n;
       cin>>n;
        cout<<i+1<<" "<<n<<" "<<T[n]<<"\n";

    }

}
