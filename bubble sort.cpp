#include <iostream>
using namespace std;
int main() {
    int a[5]={50,40,30,20,10};
    int n=sizeof(a)/sizeof(int);
    for(int part=1;part<n;part++){
        for(int i=0;i<n-part;i++){
            if(a[i]>a[i+1]){
               swap(a[i],a[i+1]);
            }

        }
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}
