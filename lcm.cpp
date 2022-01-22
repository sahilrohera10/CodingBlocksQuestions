#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int i=min(a,b);
    while (i<(a*b)){
        if(i%a==0 and i%b==0){
            cout<<i;
            break;
        }i++;

    }
    return 0;
}
