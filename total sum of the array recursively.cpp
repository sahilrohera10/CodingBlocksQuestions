#include <iostream>
using namespace std;

int sum(int arr[] , int n , int i){
    if(i==n){
        return 0;
    }



    return arr[i] + sum(arr , n , i+1);
}




int main() {

int arr[]={1,2,3,4,5};
int n=5;

    cout<<sum(arr , n ,0);
    return 0;
}
