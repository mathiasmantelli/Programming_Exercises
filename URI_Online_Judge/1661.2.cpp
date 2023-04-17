#include <bits/stdc++.h>
#include <queue>

typedef struct gegorvia{
  long long int valor;
  int indice;
}gegorvia;
using namespace std;

int main(){
  int n,i,lixo;
  long long value,quant,result;
  vector<long long int> vector;
  
  gegorvia out;
  while(cin>>n && n != 0){
    vector.clear();
    queue<gegorvia> vector_pos,vector_neg;
    for(int j = 0; j < n; j++){
      cin>>value;
      vector.push_back(value);
      if(value > 0){
	out.valor = value;
	out.indice = j;
	vector_pos.push(out);
      }else{
	out.valor = value;
	out.indice = j;
	vector_neg.push(out);
      }
    }//END-FOR

    i = 0;
    quant = result = 0;
    while(i < n){
      
      if(vector[i] != 0){ 
	
	if(vector[i] > 0){ //VALOR POSITIVO
	  if(vector_pos.front().valor == 0) vector_pos.pop();
	  if(vector[i] >= vector_neg.front().valor*(-1)){ //VECTOR >= vector_neg
	    quant = vector_neg.front().valor*(-1);
	    vector[vector_neg.front().indice] = 0;
	    vector[i] -= quant;
	    vector_pos.front().valor -= quant;
	    result += quant*(vector_neg.front().indice - i);
	    vector_neg.pop();
	  }else{ //VECTOR < vector_neg
	    quant = vector_pos.front().valor;
	   vector[vector_neg.front().indice] += quant;
	   vector[i] = 0;
	   vector_neg.front().valor += quant;
	   result += quant*(vector_neg.front().indice - i);
	   vector_pos.pop();
	  }
	}else{ //VALOR NEGATIVO
	 if(vector_neg.front().valor == 0) vector_neg.pop();
	 if(vector[i]*(-1) >= vector_pos.front().valor){
	   quant = vector_pos.front().valor;
	   vector[vector_pos.front().indice] = 0;
	   vector[i] += quant;
	   vector_neg.front().valor += quant;
	   result += quant*(vector_pos.front().indice - i);
	   vector_pos.pop();
	 }else{
	   quant = vector_neg.front().valor*(-1);
	   vector[vector_pos.front().indice] -= quant;
	   vector[i] = 0;
	   vector_pos.front().valor -= quant;
	   result += quant*(vector_pos.front().indice - i);
	   vector_neg.pop();
	 }
	}
      }else{
	i++;
      }//IF == 0
    }//END-WHILE
    cout<<result<<endl;
  }//END-WHILE
  return 0; 
}