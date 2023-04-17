#include <iostream>

using namespace std;

int main(){
	int n, n1, n2, n3, sum, total;
	cin >> n; 
	total = 0;
	for(int i = 0; i < n; i++){
		cin >> n1 >> n2 >> n3;
		sum = n1 + n2 + n3; 
		if(sum >= 2) total++; 
	}
	cout << total << endl;
	return 0; 
}
