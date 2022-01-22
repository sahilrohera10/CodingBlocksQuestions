#include <iostream>
using namespace std;



int f(int arr[] , int n , int t , int i , int count ){

if(arr[i]>t or n==0){
    return 0;

}

if(arr[i]==t){
     count+=1;
}

return  count + f(arr , n , t , i+1 ,0)  ;



}

int main() {

int n;
cin>>n;

long long arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int t;
cin>>t;

int ans =f(arr , n , t , 0 , 0);
if(ans){
    cout<<ans;
}
else{
    cout<<"-1";
}

// cout<<f(arr , n , t , 0 , 0);


    return 0;
}
