#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n+1;i++){
      for(int j=1;j<=i-1;j++){
          cout<<"  ";
      }
      for(int j=0;j<=n+1-i;j++){
          cout<<n-j-i+1<<" ";
      }
      for(int j=1;j<=n-i+1;j++){
          cout<<j<<" ";
      }
      cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<i+1-j<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
