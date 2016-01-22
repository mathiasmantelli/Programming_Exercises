#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,M,count,value,players;
	cin >>N>>M;
	players = 0;
	for(int i = 0; i < N; i++){
		count = 0;
		for(int j = 0; j < M; j++){
			cin>>value;
			if(value != 0) count++;
		}
		if(count == M)players++;
	}
	cout<<players<<endl;
	
	return 0;	
}