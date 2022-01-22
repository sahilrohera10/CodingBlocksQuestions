#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str){
    int n=strlen(str);
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}


int main() {
    char str[100];
    cin.getline(str,100);
    reverseString(str);


    cout<<"reversed string is = "<<str;
//    strrev(str);
//     cout<<str;


    return 0;
}
