#include <iostream>
#include <string>

using namespace std;

int main() {
	int x; 
	string word, output; 
	cin >> x;
	for(int i = 0; i < x; i++){
		cin >> word; 
		if(word.size() > 10){
			output = word[0] + to_string(word.size()-2) + word[word.size()-1];
			cout << output << endl;
		}else{
			cout << word << endl;
		}
	}	
	return 0;
}
