#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a[n];
    int i;
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    // for(int j=0;j<n;j++){
    //     cout<<a[j];
    // }

    int largest=a[0];
    for(int j=1;j<n;j++){
        if(a[j]>=largest){
            largest=a[j];
        }
    }
    cout<<largest;
    return 0;
}
