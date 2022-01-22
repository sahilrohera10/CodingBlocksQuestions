#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    int c=0;
    while(n>0){
        int a=n%10;
        if(a==x){
            c++;
        }
        n=n/10;
    }
    cout<<c;

    return 0;
}
