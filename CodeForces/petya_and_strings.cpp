#include <bits/stdc++.h>

using namespace std; 

int main(){
	int value = 0;
	string s1, s2; 
	cin >> s1 >> s2; 
	for(size_t i = 0; i < s1.size(); i++){
		if(tolower(s1[i], locale()) < tolower(s2[i], locale()))
			value = -1;
		if(tolower(s1[i], locale()) > tolower(s2[i], locale()))
			value = 1; 
		if(value != 0) break;
	}
	cout << value << endl;
	return 0;
}

