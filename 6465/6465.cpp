#include <iostream>
#include <vector>
using namespace std;
int main(){
	int cases,junk;
	cin>>cases;
	for(int case_a=0; case_a<cases;case_a++){
		cin>>junk;
		vector<int> data;
		data.resize(15);
		for(int i=0;i<15;i++){
			cin>>junk;
			data[i]=junk;
			}
		int ans=0;
		for(int i=0;i<14;i++)
		  if(data[i]>data[i+1])
		    ans++;
	
		cout<<case_a+1<<" "<<ans<<"\n";
	}
}

