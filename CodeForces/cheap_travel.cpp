#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, m, n;
	int total = 0, acc_rides = 0, acc_price = 0, rest = 0;
	cin >> n >> m >> a >> b;
	if(m * a > b){
		rest = (n % m) * a; 
		if(rest > b)
			cout << n / m * b + b << endl;
		else
			cout << n / m * b + rest << endl;
	}else{
		cout << n * a << endl;
	
	}
	return 0;
}
