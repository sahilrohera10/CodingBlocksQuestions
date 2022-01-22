#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0; i<n;i++){
        a[i]=a[i]*a[i];
    }
    // for(int j;j<n;j++){
    //     cout<<a[j]<<" ";
    // }

     for(int part=1;part<n;part++){
        for(int i=0;i<n-part;i++){
            if(a[i]>a[i+1]){
               swap(a[i],a[i+1]);
    }
        }
     }
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }

    return 0;
}
