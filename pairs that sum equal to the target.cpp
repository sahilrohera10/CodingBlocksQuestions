#include <iostream>
using namespace std;
int main(){
    int A[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int t;
    cin>>t;





    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=A[i]+A[j];
            if(sum==t and A[i]<A[j]){

            cout<<A[i] <<" and "<<A[j]<<endl;
        } else if(sum==t and A[i]>A[j]){
            cout<<A[j] <<" and "<<A[i]<<endl;
        }

        }
    }

    return 0;
}
