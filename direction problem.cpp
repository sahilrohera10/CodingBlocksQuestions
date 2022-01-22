#include <iostream>
using namespace std;
int main() {
    int x=0;
    int y=0;
    while(true){
        char ch;
        cin>>ch;
        if(ch=='$'){
            break;
        }
        else if(ch=='n'){
            y=y+1;
        }
        else if(ch=='s'){
            y=y-1;
        }
        else if(ch=='e'){
            x=x+1;
        }
        else if (ch=='w'){
            x=x-1;
        }

    }
    cout<<x<<" "<<y;

    return 0;
}
