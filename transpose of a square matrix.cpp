#include <iostream>
using namespace std;
int main() {

int mat[1000][1000];




int n;
cin>>n;

for(int i=0;i<n;i++){
    for(int j=0; j<n; j++){
        cin>> mat[i][j];
    }
}



for(int i=0;i<n ;i++){
    for(int j=0;j<n;j++){
        if(i<j){
        swap(mat[i][j], mat[j][i]);
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}



    return 0;
}
