#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

    int n, aux=0, mat[100][100],i,j;


    while(cin >> n){
        
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if((j == i) || (i + j == n-1)){
					if(j == i) mat[i][j] = 1;
					if(i + j == n - 1) mat[i][j] = 2;
				}else{
					mat[i][j] = 3;
				}
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<mat[i][j];
			}
			cout << "\n";
		}
    }
return 0;
}