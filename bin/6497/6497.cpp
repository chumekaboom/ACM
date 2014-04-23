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

int main()
{

	int count;
	while (cin >> count)
	{
		if (count == 0) break;
		
		vector<int> digits;
		for (int i=0; i<count; ++i)
		{
			int j;
			cin >> j;
			digits.push_back(j);
		}
		
		sort(digits.begin(), digits.end());
		
		if (digits[0]==0)
		{
			vector<int>::iterator found = find(digits.rbegin(), digits.rend(), 0).base();
			swap(digits[0], *found);
			++found;
			swap(digits[1], *found);
		}
		
		int num1 = 0;
		int num2 = 0;
		
		for (int i=0, ie=digits.size(); i<ie; ++i)
		{
			if (i%2==0) num1 = num1*10 + digits[i];
			else num2 = num2*10 + digits[i];
		}
		
		cout << num1+num2 << endl;
	}
}
