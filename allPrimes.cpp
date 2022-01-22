#include <iostream>
using namespace std;

void allPrimes(int n){
    for(int i=2;i<=n;i++){
        for(int j=2;j<n;j++){
            if(i%j==0){
              break;
            }
            // else{
            //      cout<<i<<endl;
            // }
             cout<<i<<endl;
        }

    }
}

int main() {

    allPrimes(5);


}
