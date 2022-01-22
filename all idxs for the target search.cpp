#include <iostream>
using namespace std;

void f(int arr[] , int n , int t , int i , bool flag = false){
    if(i==n){
        if(flag=false){
        cout<<"not present";}
        else{return;}
    }
   if(arr[i]==t){
       flag = true;
       cout<<i<<" ";

   }

      f(arr , n , t , i+1) ;


}


int main() {

int arr[]= {10,20,30,30,50};
int n= sizeof(arr)/sizeof(int);
int t =30;

    f(arr , n ,t, 0);

    return 0;
}
