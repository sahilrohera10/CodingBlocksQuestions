#include <iostream>
using namespace std;
int main() {
    int n,s;
    cout<<"enter a positive number= "
    cin>>n;
    s=0;
    while(n>0){
        int x=n%10;
        s=s+x;
        n=n/10;
    }
    cout<<"sum of the digits is = "<<s;

    return 0;
}
