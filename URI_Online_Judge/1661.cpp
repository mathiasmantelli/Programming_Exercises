#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,value,quant;
	vector<long long int> myvector;
	while(cin>>n && n != 0){
		quant = 0;
		myvector.clear();
		for(int i = 0; i < n;i++){
			cin>>value;
			myvector.push_back(value);
		}
		for(int i = 1; i < n; i++){
			if(myvector[i-1] < 0){
				quant += (myvector[i-1]*(-1));
			}else{
				quant += myvector[i-1];
			}
			myvector[i] += myvector[i-1];
		}
		cout<<quant<<endl;
	}
	
	return 0;
}