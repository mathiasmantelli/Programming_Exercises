#include <bits/stdc++.h>

using namespace std;

int main(){
	string name; 
	int n, val = 0; 
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> name;
		if(name[1] == '+') val++;
		else val--; 
	}
	cout << val << endl;
	return 0;
}
