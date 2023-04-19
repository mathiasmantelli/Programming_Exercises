#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n, x;
	bool is_easy = true;
	cin >> n; 
	while(n > 0){
		cin >> x; 
		if(x) is_easy = false;
		n--;
	}	
	(is_easy)?cout << "EASY" << endl:cout << "HARD" << endl;

	return 0;
}
