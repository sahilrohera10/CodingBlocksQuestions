#include <iostream>
using namespace std;

bool isPresent(int A[3][3], int t){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(A[i][j]==t){
                return true;
            }
        }
    }
    return false;
}

int main() {

int A[10][10];
int n,m;
cin>>n>>m;

int t;
cin>>t;

for(int i=0;i<n;i++){
    for(int j=0; j<m; j++){
        cin>> A[i][j];
    }
}

if(isPresent( A , t)){
    cout<<"true";
}
else{
    cout<<"false";
}

    return 0;
}
