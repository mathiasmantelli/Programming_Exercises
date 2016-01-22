#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

    int n, aux=0, mat[100][100];


    while(cin >> n && n!=0){
        aux=0;
        while (aux < n-aux){
            for(int i=aux; i< n-aux; i++){
                mat[aux][i]= aux+1;
            }
            for(int i=aux+1; i<=n/2; i++){
                mat[i][aux] = aux+1;
                mat[i][n-1-aux] = aux+1;
            }
            aux++;
        }

        if(n%2!=0){
            for(int i=0; i<=n/2; i++){
                for(int j=0; j<n; j++){
					if(j == n -1){
						printf("%3d",mat[i][j]);
					}else{
						printf("%3d ",mat[i][j]);
					}
                }
                cout << "\n";
            }
        } else {
            for(int i=0; i<n/2; i++){
                for(int j=0; j<n; j++){
					if(j == n -1){
						printf("%3d",mat[i][j]);
					}else{
						printf("%3d ",mat[i][j]);
					}
                }
                cout << "\n";
            }
        }


        for(int i=n/2-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
				if(j == 0){
					printf("%3d",mat[i][j]);
				}else{
					printf("%3d ",mat[i][j]);
				}
            }
            cout << "\n";
        }

        cout << "\n";

    }
return 0;
}