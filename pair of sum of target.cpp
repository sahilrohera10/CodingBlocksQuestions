#include <iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5};
    int t=6;
    int n=sizeof(A)/sizeof(int);

    int count=0;

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum=A[i]+A[j];
            if(sum==t){
            count++;
        }

        }
    }
    cout<<count;
    return 0;
}
