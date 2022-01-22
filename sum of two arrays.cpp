#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int A[1000];
    int B[1000];

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

     int m;
     cin>>m;
     for(int i=0;i<m;i++){
         cin>>B[i];
     }



     int sum=0;
     int x=0;
    int carry=0;

    int t = 0;
    int i=n-1;
    int j=m-1;
    int ans[1000];

    while(i>=0 and j>=0){

         sum=A[i]+B[j];

           x=sum%10;

            ans[t] = x+carry ;

            carry=sum/10;

            t++;

           i--;

           j--;

    }

           if(i<0){
            int p = B[j] + carry;
            int q = p%10;
            ans[t] = q ;
              t++;
              carry = p/10;
              ans[t] = carry;
           }
         else if(j<0){
            int p = A[j] + carry;
            int q = p%10;
            ans[t] = q ;
              t++;
              carry = p/10;
              ans[t] = carry;
         }


// ans[t] = carry;


// if(carry == 0){
//     for(int i=0;i<t;i++){
//         cout<<ans[i]<<" ";
//     }
// }
// else{
//     for(int i=0;i<=t;i++){
//         cout<<ans[i]<<" ";
//     }
// }

// cout<<endl;

if(carry == 0){
    for(int i=t-1 ; i>=0;i--){
        cout<<ans[i]<<", ";
    }
}
else{
    for(int i=t ;i>=0;i--){
        cout<<ans[i]<<", ";
    }
}
cout<<"END";


    return 0;
}
