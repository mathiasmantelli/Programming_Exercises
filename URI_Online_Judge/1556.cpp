#include <bits/stdc++.h>
#include <string.h>

using namespace std;



void depth(string input,int *label,int value){
	
	label[value] = 1;
	for(int i = 0; i < 1000; i++){
		if(!label[i]){
			cout<<input[i]<<endl;
			cout<<i<<endl;
			depth(input.erase(input.begin()), label, i); 
		}
	}
	
}

int main(){
	string input;
	int label[1000];
	
	while(getline(cin,input)){
		for(int i = 0; i < 1000;i++) label[i] = 0;
		
		depth(input,label,0);
		
	}
	return 0;	
}