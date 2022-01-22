#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int q;
    cin>>q;


    for(int j=0;j<q;j++){
        int A,k;
        cin>>A>>k;
         int count=0;
        for(int i=0;i<n;i++){
            if(A%a[i]==0){
                count++;
        }
        }
        if(count>=k){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
