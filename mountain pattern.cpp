#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j;
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=((n-i)*2)-1){
            cout<<"  ";
            k++;
        }
        j=i;
        while(j>=1){
            if(j!=n){
                cout<<j;
                cout<<" ";
            }

            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
