#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x=n;
    int z=n;

    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    int i=0;
    while(x>0){
        int y=x%10;
        i=i+pow(y,c);
        x/=10;
        // cout<<i<<endl;
    }

    if(i==z){
        cout<<"true";
    }
    else if(i!=z){
        cout<<"false";
    }
    return 0;
}
