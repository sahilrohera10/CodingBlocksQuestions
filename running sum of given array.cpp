#include <iostream>
using namespace std;
int main() {
    int A[1000];
    int B[1000];
    int i;

    int n;
    cin>>n;
    int sum=0;

    for(i=0;i<n;i++){
        cin>>A[i];
    }

    for(int j=0;j<n;j++){
        sum=sum+A[j];
        B[j]=sum;

    }
    for(int j=0;j<n;j++){
        cout<<B[j]<<" ";
    }



    return 0;
}
