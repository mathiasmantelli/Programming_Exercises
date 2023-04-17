#include <bits/stdc++.h>

using namespace std;

int quant_calls[40];
long int result[40];

int main(){
	int n,x;
	result[0] = 0;
	result[1] = 1;
	quant_calls[0] = 0;
	quant_calls[1] = 0;
	for(int i = 2; i <= 40; i++){
		result[i] = result[i-1] + result[i-2];
		quant_calls[i] = quant_calls[i-1] + quant_calls[i-2] + 2;
	}
	cin >> n;
	while(n--){
		cin>>x;
		cout<<"fib("<<x<<") = "<<quant_calls[x]<<" calls = "<<result[x]<<endl;
	}
	return 0;
}