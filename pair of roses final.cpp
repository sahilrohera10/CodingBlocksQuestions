#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int target,diff=INT_MAX,ans;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cin>>target;
        sort(arr,arr+n);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==target){
                    if(arr[j]-arr[i]<diff){
                    diff=arr[j]-arr[i];
                    ans=arr[i];
                    }
                }

            }
        }
        cout<<"Deepak should buy roses whose prices are "<<ans<<" and "<<target-ans<<"."<<endl;
    }
    return 0;
}
