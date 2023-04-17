#include <bits/stdc++.h>

using namespace std;

#define LEFT 1
#define RIGHT 2 
#define UP 3
#define DOWN 0
#define NONE 4

int main(){
 int n;
 int mat[4][4],vet[5];

 
 cin>>n;
 while(n--){
 bool none = false;
 bool flag = false;
 bool saida = false;
   for(int i = 0; i < 4; i++){
     vet[i] = 0;
     for(int j = 0; j < 4; j++){
       cin>>mat[i][j];
       if(mat[i][j] == 0) flag = true; //TEM UM ZERO NA MATRIX
       if(mat[i][j] == 2048) none = true;
     }
   }
   if(none){
     cout<<"NONE";
   }else{
    
      for(int i = 0; i < 4; i++){
	if(mat[i][0] == 0 && mat[i][3] != 0) vet[LEFT] = 1;//PODE MEXER PARA LEFT
	if(mat[i][0] != 0 && mat[i][3] == 0) vet[RIGHT] = 1;//PODE MEXER PARA RIGHT
	if(mat[0][i] == 0 && mat[3][i] != 0) vet[UP] = 1;//PODE MEXER PARA UP
	if(mat[0][i] != 0 && mat[3][i] == 0) vet[DOWN] = 1;//PODE MEXER PARA DOWN
	if(mat[i][0] != 0 && mat[i][3] != 0 && (mat[i][1] == 0 || mat[i][2] == 0)) vet[LEFT] = vet[RIGHT] = 1;
	if(mat[0][i] != 0 && mat[3][i] != 0 && (mat[1][i] == 0 || mat[2][i] == 0)) vet[UP] = vet[DOWN] = 1;
	if(mat[i][0] == 0 && (mat[i][1] != 0 || mat[i][2] != 0 || mat[i][3] != 0)) vet[LEFT] = 1;
	if(mat[i][3] == 0 && (mat[i][1] != 0 || mat[i][2] != 0 || mat[i][0] != 0)) vet[RIGHT] = 1; 
	if(mat[0][i] == 0 && (mat[1][i] != 0 || mat[2][i] != 0 || mat[3][i] != 0)) vet[UP] = 1;
	if(mat[3][i] == 0 && (mat[1][i] != 0 || mat[2][i] != 0 || mat[0][i] != 0)) vet[DOWN] = 1;
	if(mat[0][i] != 0 && mat[1][i] == 0) vet[DOWN] = 1;
	if(mat[2][i] != 0 && mat[1][i] == 0) vet[UP] = 1;
	if(mat[3][i] != 0 && mat[2][i] == 0) vet[UP] = 1;
	if(mat[1][i] != 0 && mat[2][i] == 0) vet[DOWN] = 1;
	if(mat[i][3] != 0 && mat[i][2] == 0) vet[LEFT] = 1;
	if(mat[i][1] != 0 && mat[i][2] == 0) vet[RIGHT] = 1;
	if(mat[i][1] != 0 && mat[i][0] == 0) vet[LEFT] = 1;
	if(mat[i][0] != 0 && mat[i][1] == 0) vet[RIGHT] = 1;
	if(mat[i][2] != 0 && mat[i][1] == 0) vet[LEFT] = 1;
	if(mat[i][2] != 0 && mat[i][3] == 0) vet[RIGHT] = 1;
      }
    
      for(int i = 1; i < 3; i++){
	for(int j = 0; j < 4; j++){
	  if(mat[i][j] == mat[i-1][j] && mat[i][j] != 0){
	    vet[DOWN] = 1;
	    vet[UP] = 1;
	  }
	  if(mat[i][j] == mat[i+1][j] && mat[i][j] != 0){
	    vet[DOWN] = 1;
	    vet[UP] = 1;
	  }
	}
      }
      for(int i = 0; i < 4; i++){
	for(int j = 1; j < 3; j++){
	  if(mat[i][j] == mat[i][j-1] && mat[i][j] != 0){
	    vet[LEFT] = 1;
	    vet[RIGHT] = 1;
	  }
	  if(mat[i][j] == mat[i][j+1] && mat[i][j] != 0){
	    vet[LEFT] = 1;
	    vet[RIGHT] = 1;
	  }
	}
      }
   }//IF - NONE
   for(int i = 0; i < 5; i++){
     if(vet[i] == 1){
       if(i != 0 && saida) cout<<" ";
       saida = true;
       switch(i){
	 case 0:
	   cout<<"DOWN";
	   break;
	 case 1:
	   cout<<"LEFT";
	   break;
	 case 2:
	   cout<<"RIGHT";
	   break;
	 case 3:
	   cout<<"UP";
	   break;
       }
     }
   }//end-for
   if(saida == false && none == false) cout<<"NONE";
   cout<<endl;
 }//end-while
 return 0; 
}


