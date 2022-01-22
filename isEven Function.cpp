#include <iostream>
using namespace std;

// void  greet(){
//     cout<<"hello world";
//     return;
// }

void iseven(int n){
    if(n%2==0){
        cout<<"it is an even no.";
    }
    else{
        cout<<"it is an odd no.";
    }
    return;
}

int main() {
     int x;
     cin>>x;
    iseven(x);
    return 0;

}
