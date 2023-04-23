#include <bits/stdc++.h>

using namespace std; 

int main(){
	int n, cont;
	string name;
	map<string, int> my_map;
	cin >> n;
	while(n--){
		cin >> name; 
		if(my_map.count(name) == 0){
			cout << "OK" << endl;
			my_map[name] = 1;
		}else{
			cout << name << my_map[name] << endl;
			my_map[name]++;
		}
	}

	return 0;
}
