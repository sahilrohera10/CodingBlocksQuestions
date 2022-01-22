#include <iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }

    // return n%2==0; (optimised)
}

int main() {
    // bool num=isEven(4);
    // if(num){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }

    //   bool num=isEven(4);

    if(isEven(7)){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
}
