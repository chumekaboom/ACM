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
bool pred(const pair<std::string, int>& lhs,
const pair<std::string, int>& rhs)
{
return lhs.second < rhs.second;
}


int main()
{
    char c;
    while(c=getchar())
    {
        if(c=='#')
            break;
        string paragraph="";
            if(isalpha(c))
                paragraph+=tolower(c);
            else paragraph+=" ";
        while(c=getchar())
        {
            if(c=='#')
                break;
            if(isalpha(c))
                paragraph+=tolower(c);
            else paragraph+=" ";
        }
        stringstream par;
        string word;
        if(count(paragraph.begin(),paragraph.end(),' ')==paragraph.size())
            break;
        map<string, int> words;
        par<<paragraph;
        while(par>>word)
            words[word]++;

       auto max_val = std::max_element(words.begin(), words.end(), pred);
       int max_feq=max_val->second;
       words.clear();
       par.clear();
       par<<paragraph;
        while(par>>word)
        {
            words[word]++;
            if(words[word]==max_feq)
            {
                cout<<setw(4)<<right<<words[word]<<" "<<word<<"\n";
                break;
            }
        }
    }
}
