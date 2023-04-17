#include<bits/stdc++.h>
#define MAX 25
using namespace std;
vector<vector<int> > contatos(MAX);
vector<vector<string> > mensagens(MAX);
vector<bool> visitados(MAX);
vector<string> nomes;
int t,n,send,t1,t2;
string a1,a2,a3,nome,lixo;

void DFS(int send){
	
	visitados[send] = 1;
	t = contatos[send].size();
	
	if(t < t1){
		mensagens[send].push_back(a1);
	}else{
		if(t1 <= t && t < t2){
			mensagens[send].push_back(a2);
		}else{
			mensagens[send].push_back(a3);
		}
	}
	
	for(int i = 0; i < contatos[send].size();i++){
		int next = contatos[send][i];
		if(!visitados[next]){
			DFS(next);
		}
	}
}


int main(){
	while(cin>>n && n){
		
		for(int i = 0; i < n; i++){
			int num;
			while(cin>>num && num){
				contatos[i].push_back(num-1);
			}
		}//FIM DO PRIMEIRO FOR
		
		while(cin>>send && send){
			cin>>t1>>t2;
			cin>>a1>>a2>>a3;
			for(int j = 0; j < visitados.size(); j++) visitados[j] = false;
			
			DFS(send-1);
			for(int k = 0; k < visitados.size(); k++){
				if(!visitados[k]){
					mensagens[k].push_back(a1);
				}
			}
			
		}
		
		while(n--){
			cin>>nome;
			nomes.push_back(nome);
		}
		
		for(int k = 0; k < nomes.size(); k++){
			cout<<nomes[k]<<": ";
			for(int j = 0; j < mensagens[k].size(); j++) cout<<mensagens[k][j]<<" ";
			cout<<endl;
		}
	
		contatos = vector<vector<int> >(MAX);
		mensagens = vector<vector<string> >(MAX);
		nomes.clear();
		
		
	}//FIM DO PRIMEIRO WHILE
	
	return 0;
}