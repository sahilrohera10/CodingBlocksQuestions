#include <iostream>
using namespace std;
int main() {
  int A[10][10];

  int n , m ;
  cin>>n>>m;

  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>A[i][j];
      }
  }

  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cout<<A[i][j]<<" ";
      }
      cout<<endl;
  }

    return 0;
}
