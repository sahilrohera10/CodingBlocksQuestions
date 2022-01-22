#include <iostream>
using namespace std;

int f(int arr[] , int n , int t , int i){
    if(i==-1){
        return -1;
    }
   if(arr[i]==t){
       return i;
   }
   else{
    return f(arr , n , t , i-1) ;
   }

}


int main() {

int arr[]= {10,20,40,40,50};
int n= sizeof(arr)/sizeof(int);
int t =40;

    cout<<f(arr , n ,t, n-1);
    return 0;
}
