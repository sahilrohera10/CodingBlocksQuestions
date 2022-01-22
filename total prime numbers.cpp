#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
       int j=2;
       while(j<i){
        if(i%j==0){

            break;
        }
        j++;

    }
    if(j==i) cout<<i<<endl;
    i++;

    }
    return 0;
}
