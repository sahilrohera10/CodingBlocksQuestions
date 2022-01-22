#include <iostream>
using namespace std;
int main() {

int array[10][10];

int n,m;
cin>>n>>m;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>array[i][j];
    }
}

int i=0;

while(i<n){
     if(i%2==0){
         for(int j=0;j<m;j++){
             cout<<array[i][j]<<", ";
         }
     }
     else{
         for(int k=m-1;k>=0;k--){
             cout<<array[i][k]<<", ";
         }
     }

     i++;

}
cout<<"END";



  return 0;
}
