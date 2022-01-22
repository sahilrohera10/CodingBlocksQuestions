#include <iostream>
using namespace std;
int main() {

    int i=1;
    int c=0;
    while (true){
        char ch;
    cin>>ch;
    if(ch=='$'){
        break;
    }
    else{
        c++;
    }
    }
    cout<<"no. of characters are "<<c;
    return 0;
}
