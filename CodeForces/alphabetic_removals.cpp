#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned long int k, n; 
	string s, s2; 
	cin >> n >> k;
	cin >> s;
	vector<list<int>> my_vec(26); 
	int index;
	if(k < n){
		for(int i = 0; i < n; i++){
			index = (int)(s[i] - 'a');
	//		cout << i << " - " << s[i] << " - " << index << " - " << my_vec[index].size() << endl; 
			my_vec[index].push_back(i);
		}

		for(int i = 0; i < my_vec.size(); i++){
			int index;
			while(!my_vec[i].empty() && k > 0){
				index = my_vec[i].front();
		//		cout << index << " " << s[index] << " " << k << " " << my_vec[i].size() << endl;
				s[my_vec[i].front()] = '-';
				my_vec[i].pop_front();
				k--;
			}
		}
		for(auto i: s)
			if(i != '-') cout << i;
	}		

	cout << endl;
	
	return 0;
}
