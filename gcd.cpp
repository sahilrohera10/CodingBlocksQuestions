#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int i=min(a,b);
    while(i>=1){
        if(a%i==0 and b%i==0){
            cout<<i;
            break;
        }i--;

    }
    return 0;
}
