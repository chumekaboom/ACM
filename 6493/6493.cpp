#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int people;
    int turns;
    int position;
    while(cin>>people)
    {
        if(people==0) break;
        score=0;
        position=0;
        cin>>turns;
        vector<int> peoples;
        peoples.resize(people);
        while(1)
        {
			
            for(int i=0; i<peoples.size(); i++)
            {
                peoples[i]+=turns/peoples.size();
            }
            int extra_count=turns%peoples.size();;
            if(turns/peoples.size()==turns)extra_count=turns;
            for(int i=0; i<extra_count; i++)
            {
                peoples[position]++;
                position++;
                if(position==peoples.size())position=0;
            }
			int dele=position-1;
			if(dele==-1)dele=peoples.size()-1;
            peoples.erase(peoples.begin()+dele);
            position-=1;
            if(peoples[0]==peoples[peoples.size()])
			{
            cout<<peoples.size()<<" "<< peoples[0]<<"\n";
                break;
            }
        }

    }



}

