#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    char input;
    vector<int> bits;
    int spaces=0;
    while(input=getchar())
    {
        if(input=='#')break;
        if(input==' ')
        {
            spaces++;
        }
        if(input!=' '&&spaces!=0)
        {
            if(spaces%2)bits.push_back(0);
            else bits.push_back(1);
            spaces=0;
        }
        if(input=='*')
        {
            string output;
            int a,b,c,d,e;
            for(int i=0; i<bits.size();)
            {
                a=bits[i];
                if(i+1>=bits.size()) b=0;
                else b=bits[i+1];
                if(i+2>=bits.size()) c=0;
                else c=bits[i+2];
                if(i+3>=bits.size()) d=0;
                else d=bits[i+3];
                if(i+4>=bits.size()) e=0;
                else e=bits[i+4];
                i+=5;
                int sum=a*16+b*8+c*4+d*2+e;
                if(sum==0)output.push_back(' ');
                else if(sum<27)
                {
                    char out='A'+sum-1;
                    output.push_back(out);
                }

                if (sum==27)output.push_back('\'');
                if (sum==28)output.push_back(',');
                if (sum==29)output.push_back('-');
                if (sum==30)output.push_back('.');
                if (sum==31)output.push_back('?');
            }
            bits.resize(0);
            cout<<output<<"\n";

        }

    }



}

