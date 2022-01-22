#include <iostream>
using namespace std;
int main() {

     int n;
     cin>>n;
     int A[n];
     for(int i=0;i<n;i++){
         cin>>A[i];
     }

     long long FinalArray[n];


     for(int i=0;i<n;i++){
          long long p=1;
         for(int j=0;j<n;j++){
              if(i!=j){
                   p=p*A[j];
              }
         }
         FinalArray[i]=p;

     }

     for(int i=0;i<n;i++){
         cout<<FinalArray[i]<<" ";
     }

    return 0;
}
