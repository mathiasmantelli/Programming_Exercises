#include<bits/stdc++.h>

using namespace std;

bool mycomp(int i, int j){ return (i > j);}

int main(){
	int n, x, tw1, c1, sum;
	vector<int> vec; 
	cin >> n;
	sum = 0;
	for(int i = 0; i < n; i++){
		cin >> x;
		sum += x; 
		vec.push_back(x);
	}
	tw1 = c1 = 0;
	sum /= 2.0;
	sort(vec.begin(), vec.end(), mycomp);
	for(auto i : vec){
		if(tw1 > sum){
			break;
		}else{
			tw1 += i;
			c1++;
		}
	}
	cout << c1 << endl;
	return 0; 
}
