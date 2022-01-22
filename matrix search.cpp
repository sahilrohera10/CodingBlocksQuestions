#include <iostream>
using namespace std;

int main() {


int n,m;
cin>>n>>m;
int A[n][m];

for(int i=0;i<n;i++){
    for(int j=0; j<m; j++){
        cin>> A[i][j];
    }
}

int t;
cin>>t;

  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==t){
                cout<<"1";
                return 0;
            }
        }
    }
    cout<<"0";


    return 0;
}
