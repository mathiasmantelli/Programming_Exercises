#include <bits/stdc++.h>

#define ll long long

using namespace std; 

int main(){
	/*int n, k = 0;
	long long int x, sum;
	vector<long long int> vec; 
	cin >> n;
	sum = 0; 
	for(int i = 0; i < n; i++){
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	int i = 0;
	long long int initial = vec[0];
	while(k < n){
		cout << initial + k << " " << vec[i] << "| " << sum << endl;
		if(initial + k != vec[i]) 
			sum++;
		else i++;
			k++;
	}
	cout << sum << endl; */
	ll n, x, mymax, mymin; 
	cin >> n >> x;
	mymax = mymin = x; 
	for(int i = 1; i < n; i++){
		cin >> x; 
		mymax = max(x, mymax);
		mymin = min(x, mymin);
	}
	
	ll total = (mymax - mymin + 1) - n; 
	cout << total << endl;
	return 0;
}
