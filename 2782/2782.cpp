#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;




int main()
{
	int l,w,h,student,min,max,max_score,min_score;
	string name;
	cin>>student;

	while(student!=-1)
	{
		min_score=INT_MAX;
		max_score=0;
		vector<int> clay;
		vector<string> students;

		for (int i=0;i<student;i++)
		{
			cin>>l;
			cin>>h;
			cin>>w;
			cin>>name;
//			cout<<l*w*h;
			clay.push_back(l*w*h);
			students.push_back(name);
		}
		for(int i=0;i<clay.size();i++)
		{
			if (clay[i]<min_score)
			{
				min_score=clay[i];
				min=i;
			}
			if (clay[i]>max_score)
			{
				max_score=clay[i];
				max=i;
			}
		}
		cout<<students[max]<<" took clay from "<<students[min]<<".\n";

	cin>>student;
	}
}
