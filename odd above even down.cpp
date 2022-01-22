#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=n;
    while (i>=1){
        if(i%2!=0){
            cout<<i<<endl;
        }
        i=i-1;
    }
    i=2;
    while(i<=n){
        cout<<i<<endl;
        i=i+2;
    }
    return 0;
}
