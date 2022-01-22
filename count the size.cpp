#include <iostream>
using namespace std;
int main() {
    int i=1;
    while(true){
        char ch;
        ch=cin.get();
        if(ch=='&'){
            break;
        }

        else if(ch>=65 and ch<=90){
            c++;
        }
        else if(ch>=97 and ch<=122){
            count++;
        }
        else if(ch>=48 and ch<=57){
            counts++;
        }
        else if(ch==' '||ch=='\n'||ch==\t){
            widespace++;
        }
        else{
            counting++;
        }
    }
    cout<<"uppercase= "<<c;
    cout<<"lowercase= "<<count;
    cout<<"digits= "<<counts;
    cout<<"widespace= "<<widespace;
    cout<<"special= "<<counting;
    return 0;
}
