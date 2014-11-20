#include <iostream>
#include <vector>
using namespace std;

int main(){
int nums;
while(cin>>nums){
  if(nums==0)break;
  vector<int> input;
  int cur;
  cin>>cur;
  input.push_back(cur);
  for(int i=1;i<nums;i++){
    cin>>cur;
    if(input[input.size()-1]!=cur)
      input.push_back(cur);
  }
  for(int i=0;i<input.size();i++)
    cout<<input[i]<<" ";
  cout<<"$\n";
}
}
