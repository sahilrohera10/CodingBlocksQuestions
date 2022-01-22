#include <iostream>
using namespace std;
int main() {
    int n,no,num;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i;j++){
            cout<<i+j<<" ";
            no=i+j;
        }
        num=no-1;
        if(i!=1){
            for(int j=1;j<=i-1;j++,num--){
                cout<<num<<" ";
            }
        }
        cout<<endl;
    }
    int a,b;


    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        if(i!=n-1){
        for(int j=0;j<n-i;j++){
            cout<<n-i+j<<" ";
            a=n-i+j;
        }
        b=a-1;
        for (int j=0;j<n-i-1;j++,b--){
            cout<<b<<" ";
        }

    }
    else{
        cout<<"1";
    }
    cout<<endl;
    }

    return 0;
}
