#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<pow(2,n);i++){
        for(int j=0;j<n;j++){
          if((i>>j)&1) {
              cout<<a[j]<<" ";
          }
        }
        cout<<endl;
    }
    return 0;
}
