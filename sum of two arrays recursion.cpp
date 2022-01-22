#include <iostream>
using namespace std;
int sumarr(int arr[] , int i){

    if(i== -1){
        return 0;
    }
   return arr[i] + sumarr(arr , i-1);
}



int main() {




int arr[]={1,2,3,4,5};
int n=5;

    cout<<sumarr(arr , n-1);
    return 0;
}
