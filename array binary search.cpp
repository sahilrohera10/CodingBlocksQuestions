#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;


int s=0;
int e=n-1;

 while(s<=e)
{

int m=(s+e)/2;
if(a[m]==target){
    cout<<m;
    break;
}
else if(a[m]>target){

    e=m-1;
}
else if(a[m]<target){
    s=m+1;

}

}
if(s>e){
    cout<<"-1";
}
return 0;

}
