#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n]={0};
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        // for(int i=0; i<n; i++){
        //     cout<<arr[i];
        // }
        int ar[m]={0};
        for(int i=0; i<m; i++){
            cin>>ar[i];
        }
        // for(int i=0; i<m; i++){
        //     cout<<ar[i];
        // }
        int i=0, j=0;
        int sum1=0, sum2=0;
        int finalsum=0;
        while(i<n and j<m){
            if(arr[i]==ar[j]){
                if(sum1>sum2){
                finalsum+=sum1;
                }else{
                finalsum+=sum2;
                }
                finalsum+=arr[i];

                sum1=0;
                sum2=0;
                i++;j++;
            }else if(arr[i]<ar[j]){
                sum1+=arr[i];
                i++;
            }else{
                sum2+=ar[j];
                j++;
            }
        }
        while(i<n){
            sum1+=arr[i];
                i++;
        }
        while(j<m){
            sum2+=ar[j];
                j++;
        }

        if(sum1>sum2){
                finalsum+=sum1;
                }else{
                finalsum+=sum2;
                }
        cout<<finalsum<<"\n";

    }
    return 0;
}
