#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            break;
        }
        i++;

    }
    if(i==n) cout<<"Prime"<<endl;


    return 0;

}
