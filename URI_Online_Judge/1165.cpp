#include <stdio.h>
#include <iostream>
#include <math.h> // necessário para raiz
 
using namespace std;
 
int main() {
    int n, cont;
    long int x, aux;
    bool flag;
    cin >> n;
    while(n--){
      cin >> x;
      aux = 1;
      cont = 0;
      flag = false;
      while(aux != x){
	if(x % aux == 0){
	  if(aux == 1 || aux == x){
	    cont++;
	  }else{
	    cont++;
	    if(cont == 2){
	      flag = true;
	      break;
	    }
	  }
	}//FIM IF
	aux++;
      }//FIM WHILE
      if(!flag){
	printf("%ld eh primo\n",x);
      }else{
	printf("%ld nao eh primo\n",x);
      }
    }//FIM WHILE
    return 0;
}