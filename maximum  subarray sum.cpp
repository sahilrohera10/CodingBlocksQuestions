#include <iostream>
#include <climits>
using namespace std;

int maximumSubarraySum(int A[],int n){

 int max_sum = INT_MIN;

 int start,end;
 int j,i;
   for ( i=0;i<n;i++){

       for(j=i;j<n;j++){
           int sum=0;
           for(int k=i;k<=j;k++){
             sum+=A[k];
           }
           if(sum>max_sum){
               max_sum=sum;
               start=i;
               end=j;
           }
       }


   }

    // for(int c=i;c<=j;c++){
    //        cout<<A[c];
    //    }
    return max_sum;
}

int main() {

    int A[]={-4,1,3,-2,6,-1,4,-7};
    int n=sizeof(A)/sizeof(int);
    int  sum = maximumSubarraySum(A,n);
   cout<<"maximum subarray sum = " << sum;



    return 0;
}
