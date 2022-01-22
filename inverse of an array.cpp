#include <iostream>
using namespace std;
int main() {

    int n;
    cin>>n;
    int  array[n];
    int ans[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }




    int i=0;
    while(i<n){
int temp=array[i];
ans[temp] = i;
i++;



    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }


    return 0;

}
