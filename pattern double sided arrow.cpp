#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
       for(int j=1;j<=n-2*i+1;j++){
          cout<<"  ";
       }
       for(int j=0;j<i;j++){
           cout<<i-j<<" ";
       }
       if(i!=1){
       for(int j=1;j<=2*i-3;j++){
           cout<<"  ";
       }
       for(int j=1;j<=i;j++){
           cout<<j<<" ";
       }
    }
    cout<<endl;
    }

    for(int i=1;i<=((n-1)/2);i++){
        for(int j=1;j<=2*i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=((n-1)/2)-i;j++){
            cout<<((n-1)/2)-j-i+1<<" ";
        }
        if(i!=((n-1)/2)){
            for(int j=0;j<((n-1)/2)-2*i+2;j++){
                cout<<"  ";
            }
            for(int j=0;j<=((n-1)/2)-i;j++){
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }

   return 0;
}
