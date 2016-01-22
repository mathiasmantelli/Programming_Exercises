#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std; 

int main(){ 
	string nome, lixo; 
	int valor; 
	double cont,result = 0; 
	cont = 0;
	while(getline(cin,nome)){
		cin >> valor;
		cin >> lixo;
		result += valor; 
		cont++;
		
	}
	printf("%.1f\n",result/cont);
	return 0; 	
}