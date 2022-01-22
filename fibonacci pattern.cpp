#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    int  a=0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<"  "<<b<<endl;
    int c;
    a=b;
    for(int i=3; i<=n; i++){
       for(int j=1;j<=i;j++){
            c=a+b;
            cout<<c<<"  ";
            a=b;
            b=c;
       }
       cout<<endl;
    }
    return 0;
}
