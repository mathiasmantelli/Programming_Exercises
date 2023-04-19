#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, x, total = 0;
	string temp;
	vector<string> answers;
	vector<int> values;
	map<int, int> occur = {{0,0}, {1,0}, {2,0}, {3,0}, {4,0}, };

	cin >> n >> m;
		
	answers.clear();
	values.clear();
	for(int i = 0; i < n; i++){
		cin >> temp;
		answers.push_back(temp); 
	}
	for(int i = 0; i < m; i++){
		cin >> x; 
		values.push_back(x);
	}
	for(int i = 0; i < m; i++){
		for(size_t j = 0; j < answers.size(); j++){
			switch(answers[j][i]){
				case 'A':
					occur[0]++;
				break;
				case 'B':
					occur[1]++;
				break;
				case 'C':
					occur[2]++;
				break;
				case 'D':
					occur[3]++;
				break;
				case 'E':
					occur[4]++;
				break;
			}
		}
		int max = -1;
		for(size_t k = 0; k < occur.size(); k++){
			if(occur[k] > max){
				max = occur[k];
			}
			occur[k] = 0;
		}
		total += max * values[i];
	}
	cout << total << endl;
	
	return 0;
}
