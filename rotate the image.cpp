#include<iostream>
using namespace std;
int main() {
int N;
int M;
cin>>N;
M=N;
int mat[M][N]={};
for(int i=0;i<M;i++){
       for(int j=0;j<N;j++){
               cin>>mat[i][j];
               }}
for(int i=0;i<M;i++){
       for(int j=0;j<N;j++){
            if(i<j)  {swap(mat[i][j],mat[j][i]);}
               }//transpose of matrix!
}
for(int j=0;j<N;j++){
        for(int i=0;i<M;i++){
     if(i<=(N-1)/2){
        swap(mat[i][j],mat[M-1-i][j]);
     }
	}


}

for(int i=0;i<M;i++){
       for(int j=0;j<N;j++){
               cout<<mat[i][j]<<" ";
               }cout<<endl;



}


	return 0;
}
