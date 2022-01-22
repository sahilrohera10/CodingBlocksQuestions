#include <iostream>
using namespace std;
int main() {
    int n=516;
    int * nptr =&n;
    char * chptr =(char*)&n;

    cout<<(int)*chptr;

    return 0;
}
