#include <iostream>
using namespace std;

int f(int arr[] , int n , int t , int i){
    if(i==n){
        return -1;
    }
   if(arr[i]==t){
       return i;
   }
   else{
    return f(arr , n , t , i+1) ;
   }

}


int main() {

int arr[]= {10,20,30,40,50};
int n= sizeof(arr)/sizeof(int);
int t =30;

    cout<<f(arr , n ,t, 0);
    return 0;
}
