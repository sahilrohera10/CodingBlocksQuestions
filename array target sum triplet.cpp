#include <iostream>
using namespace std;
int main() {


   int n;
   cin>>n;
   int A[1000];

   for(int i=0;i<n;i++){
       cin>>A[i];
   }

   int t;
   cin>>t;

   for(int i=0;i<n;i++){

       for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if( t == A[i] + A[j]+ A[k]) {
                       int C[3]={A[i], A[j], A[k]};
                       for(int part=1;part<3;part++){
                           for(int i=0;i<3-part;i++){
                               if(C[i]>C[i+1]){
                                    swap(C[i],C[i+1]);
                               }
                           }
                       }

                           cout<<C[0]<<", "<<C[1]<<" and "<<C[2];
                            cout<<endl;
                       }

                }

            }
       }
       return 0;
   }


