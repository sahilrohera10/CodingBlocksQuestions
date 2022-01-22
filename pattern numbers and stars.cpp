#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=(n+1-i)){
            cout<<j<<" ";
            j++;
        }
        j=1;
        while(j<=(i-1)){
            cout<<"* ";
            j++;
        }
        j=1;
        while(j<=(i-2)){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
