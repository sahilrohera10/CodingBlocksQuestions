#include <iostream>
using namespace std;
int main() {

  int A[3][3]={{1,2,3},
               {4,5,6},
               {7,8,9}};

  int n=3;
  int m=3;


   for(int j=0;j<m;j++){

       if(j%2==0){


       for(int i=0;i<n;i++){
           cout<<A[i][j]<<" ";
       }
       }

else{


       for(int k=2;k>=0;k--){
           cout<<A[k][j]<<" ";

       }
}

       cout<<endl;
   }

    return 0;
}
