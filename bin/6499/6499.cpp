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
using namespace std;

vector<char> order;

bool func(string a, string b)
{
for(int i=0;i<a.size();i++)
	{
	int index_a;
	int index_b;
	if(b.size()==i)return false;
	for(int q=0;q<order.size();q++)
		{
		if(a[i]==order[q])
			{
			index_a=q;
			}
		if(b[i]==order[q])
			{
			index_b=q;
			}
		}
	if(index_a<index_b)return true;
	if(index_a>index_b)return false;
	}
if(a.size()<b.size())return true;
return false;
}

int main()
{
int year=0;
int number_cases;
while(cin>>number_cases)
	{
	year++;
	if(number_cases==0)break;
	string alphabet;
	cin>>alphabet;
	order.clear();
	for(int i=0;i<alphabet.size();i++)
		order.push_back(alphabet[i]);
	vector<string> words;
	for(int i=0;i<number_cases;i++)
		{
		string word;
		cin>>word;
		words.push_back(word);
		}
    sort(words.begin(),words.end(),func);
	cout<<"year "<<year<<"\n";
	for(int i=0;i<words.size();i++)
		cout<<words[i]<<"\n";



	}
}
