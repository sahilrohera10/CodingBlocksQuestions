#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=(n-1)/2;i++){
        cout<<"*";
        for(int j=1;j<=((n-1)/2)-1;j++){
            cout<<" ";
        }
        if(i==1){
            for(int j=1;j<=(n+1)/2;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;


    for(int i=1;i<=(n-1)/2;i++){
        if(i==(n-1)/2){
            for(int j=1;j<=(n+1)/2;j++){
                cout<<"*";
            }
            for(int j=1;j<=((n-1)/2)-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        else{
            for(int j=1;j<=(n-1)/2;j++){
                cout<<" ";
            }
             cout<<"*";

            for(int j=1;j<=((n-1)/2)-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
