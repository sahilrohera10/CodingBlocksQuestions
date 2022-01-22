#include <iostream>
using namespace std;
int main() {

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int ans[n];
for(int i=0;i<n;i++){
    ans[i]= 1 ;
}
// for(int i=0;i<n;i++){
//     cout<<ans[i]<<" ";
// }


int i=0;
int j=0;
while(i<n){
    if(arr[i]==0){
        ans[j] = 0;
        j++;
    }
    i++;
}

for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}



    return 0;
}
