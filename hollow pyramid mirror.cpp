#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int k=1;k<=2*n-1;k++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-2*i+2;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=1;k<=2*n-1;k++){
        cout<<"*";
    }
    cout<<endl;
    return 0;
}
