#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	float dias,q,d,p;
	while(cin >> q && q != 0){
		cin>> d >> p;
		dias = ((q*d)/-(q-p));
		((int)(dias*p) == 1)? printf("%d pagina\n",(int)(dias*p)) : printf("%d paginas\n",(int)(dias*p));
	}
	return 0;	
}