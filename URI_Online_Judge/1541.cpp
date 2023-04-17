#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {

    int A,B,C;
	double casa, area, terreno,x; 
	casa = area = terreno = x = 0; 

	while(cin >> A && A != 0){
		cin >> B >> C; 
		casa = A * B; 
		x = 100. / C; 
		area = casa * x; 
		terreno = trunc (sqrt(area));
		cout<<terreno<<endl;
		
	}
return 0;
}