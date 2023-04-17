#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std; 

int main(){ 
	long long int cont,mat[15][15],n, i, j, mult,valor, cont2,k;
	mult = 4; 
	
	while(cin >> n && n != 0){ 
		char nome[10] = {"%%%dld"};
		mat[0][0] = 1; 
		for(i = 1; i < n; i++){ 
			valor = mat[i][i] = mat[i-1][i-1] * mult;
			j = i;
			while(j > 0){
				j--;
				valor /= 2;
				mat[i][j] = valor;
				mat[j][i] = valor;
			}
		}
		cont = 0; 
		valor = mat[n-1][n-1];
		while(valor > 0){
			valor /= 10;
			cont++;
		}
		sprintf(nome,nome,cont);
		for( i = 0; i < n; i++){ 
			for(j = 0; j < n; j++){
				if(j == n - 1){
					//cout<<mat[i][j];
					printf(nome,mat[i][j]);
				}else{
					//cout<<mat[i][j];
					printf(nome,mat[i][j]);
					cout<<" ";	
				}
			}
			cout<<endl;
		}
		cout<<endl;		
	}
	return 0; 
}