#include <iostream>
using namespace std;
int main() {

    int A[]={2,4,6};
    int B[]={1,3,5};

    int n=sizeof(A)/sizeof(int);
    int m=sizeof(B)/sizeof(int);

    int C[6];

    // for(int i=0; i<n;i++){
    //     for(int j=0;j<m;j++){

        int i=0;
        int j=0;
        int k=0;
        while(i<n and j<m){


            if(A[i]<B[j]){
                C[k]=A[i];
                i++;
                k++;
            }
            else{
                 C[k]=B[j];
                 j++;
                 k++;
            }
        }

        while(j<m){
            C[k]=B[j];
            k++;
            j++;
        }

        while(i<n){
            C[k]=A[i];
            k++;
            i++;
        }


    for(int i=0;i<m+n;i++){
        cout<<C[i]<<" ";
    }

    return 0;
}
