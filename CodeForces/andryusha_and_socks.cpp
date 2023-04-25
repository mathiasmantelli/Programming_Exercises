#include <bits/stdc++.h>

#define ll long long int

using namespace std; 

int main(){

	ll n, sum; 
	int x; 
	cin >> n;
	map<int, int> mp; 
	sum = -1;
	for(int i = 0; i < 2 * n; i++){
		cin >> x; 
		mp[x]++;
		if(mp[x] == 2){
			mp.erase(x);
		}else{
			ll msize = mp.size(); 
			if(msize > sum){
				sum = msize;
		 	}	
		}
	}
	cout << sum << endl;
	return 0;
}
