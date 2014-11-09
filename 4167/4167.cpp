#include <iostream>

using namespace std;

int main()
{
    string input;
    cin>>input;
    while(input!="#")
    {
        int count =0;
        for(int i=0; i<input.size(); i++)
        {
            if(input[i]=='1') count++;

        }
        if(input[input.size()-1]=='e'&&count%2)
            input[input.size()-1]='1';
        else if(input[input.size()-1]=='e')
            input[input.size()-1]='0';
        else if(input[input.size()-1]=='o'&&count%2)
            input[input.size()-1]='0';
        else input[input.size()-1]='1';
        cout<<input<<"\n";
        cin>>input;
    }

}
