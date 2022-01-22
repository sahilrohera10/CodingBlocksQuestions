#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    bool flag=false;
    for(int j=0;j<n;j++){
        if(a[j]==m){
            cout<<j;
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"-1";
    }

    return 0;
}
