#include <iostream>
using namespace std;
int main() {
    int s=0;
    int i=1;
    while(i<=9999){
        int a;
        cin>>a;
        s=s+a;

        if(s<0){
            break;
        }
        else{
            cout<<a;
            cout<<endl;

        }
        i++;
    }
}
