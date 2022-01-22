#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {

    char str[]={"hello"};

    int n=strlen(str);

    reverse(str,str+n);
    cout<<str;


    return 0;
}
