#include<iostream>
using namespace std;

int sol(int *arr, int n){

    int s=0;

    for(int i=1; i<n-1; i++){
    int left=arr[i];
    for(int j=0; j<i; j++){
        left=max(left,arr[j]);
    }
    int right=arr[i];
    for(int j=i+1; j<n; j++){
        right=max(right,arr[j]);
    }

    s+=min(left,right) - arr[i];
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    int arr[n];
    int temp[n]={0};
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    cout<<sol(arr,n)<<endl;
    }
    return 0;
}
