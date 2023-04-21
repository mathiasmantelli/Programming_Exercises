#include <bits/stdc++.h>

using namespace std; 

int main(){
	long long n, t, k=0; 
	int temp, count = 0; 
	cin >> n; 
	t = n;
	while(n > 9){
		count++;
		n++;		
		while(n%10 == 0)
			n /= 10;

		//cout << n << " " << count << endl;
	}
	count += 9;
	cout << count << endl;

	return 0;
}
