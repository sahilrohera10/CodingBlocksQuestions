#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=0;
    for(int i=0;i<ceil(log2(n+1));i++){
        if((n>>i)&1){
            c++;
        }
    }
    cout<<"no. of set bits in "<< n <<" is "<<c;
    return 0;
}
