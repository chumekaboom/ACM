#include <iostream>
#include <stdlib.h>

using namespace std;
void binary_increment(int a[6]);
int main(){

string input,hour_s,min_s,sec_s,temp_a,temp_b;
int numbers,hour_i,min_i,sec_i;
cin>>numbers;
int current=0;
while (current<numbers)
{
int hour_b[6]={0,0,0,0,0,0};
int min_b[6]={0,0,0,0,0,0};
int sec_b[6]={0,0,0,0,0,0};
std::cin>>input;
temp_a=input[0];
temp_b=input[1];
hour_s=temp_a+temp_b;
temp_a=input[3];
temp_b=input[4];
min_s=temp_a+temp_b;
temp_a=input[6];
temp_b=input[7];
sec_s=temp_a+temp_b;
hour_i=atoi(hour_s.c_str());
min_i=atoi(min_s.c_str());
sec_i=atoi(sec_s.c_str());
//std::cout<<hour_i<<min_i<<sec_i<<"\n";
for (int i=0;i<hour_i;i++)
{
	binary_increment(hour_b);
}
for (int i=0;i<min_i;i++)
{
	    binary_increment(min_b);
}
for (int i=0;i<sec_i;i++)
{
	    binary_increment(sec_b);
}

current++;
std::cout<<current<<" ";
for (int i=0;i<6;i++)
{
	std::cout<<hour_b[i]<<min_b[i]<<sec_b[i];
}
std::cout<<" ";
for (int i=0;i<6;i++)
{std::cout<<hour_b[i];
}
for (int i=0;i<6;i++)
{std::cout<<min_b[i];
}
for (int i=0;i<6;i++)
{std::cout<<sec_b[i];
}
std::cout<<"\n";
}
return 0;
}

void binary_increment(int a[6])
{
int temp;
int over=1;
for(int i=5;i>=0;i--)
{
temp=a[i]+over;
if (temp<2)
	{a[i]=temp;
	over=0;}
else if (i!=0)
	{a[i]=temp-2;
	over=1;}

}
return;
}   
