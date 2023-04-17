#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	int empty;
	
	cin>>N;
	
	while(N > 0){
		N+=1;
		int vet[N];
		
		for(int i = 1; i < N; i++) cin>>vet[i];
		 
		for(int m = 1; m < N; m++){
			if(vet[m] == m){		
				vet[m] = 0;
				for(int j = 1; j < m; j++){
					vet[j] += 1;
				}
				m = 0;
			}
		}
		empty = 0;
		for(int m = 1; m < N;m++)if(vet[m] == 0)empty++;
		
		if(empty == N-1){
			cout<<"S"<<endl;
		}else{
			cout<<"N"<<endl;
		}
		cin>>N;
	}
}