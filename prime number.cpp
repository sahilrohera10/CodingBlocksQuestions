#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){

            break;
        }
    }
    i==n? cout<<"it is a prime no."<<endl:
    cout<<"it is a non prime no."<<endl;


    return 0;

}
