#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
            cout<<n-j+1<<" ";
        }
        for(int j=1;j<=2*n-2*i+1;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            if(i==n+1){
                for(int k=1;k<=n;k++){
                    cout<<k<<" ";
                }
                break;
            }
            else{
               cout<<(n-i+1+j)<<" ";
            }

        }
        cout<<endl;
    }


    for (int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<n-j<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i+1;j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
