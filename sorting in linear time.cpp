#include <iostream>
using namespace std;
int main() {

int n;
cin>>n;

int array[n];

for(int i=0;i<n;i++){
    cin>>array[i];
}

int ans[n];

for(int i=0;i<n;i++){
    ans[i]= 1;
}

int count0=0;
int count2=0;

for(int i=0;i<n;i++){
    if(array[i]==0){
        count0++;
    }
    else if(array[i]==2){
        count2++;
    }
}


for(int i=0;i<count0;i++){
    ans[i]=0;
}

for(int i=n-1 ; i>=n-count2 ; i--){
  ans[i]=2;

}



for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}




    return 0;
}
