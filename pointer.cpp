#include <iostream>
using namespace std;
int main() {
    int n=10;
    cout<<n << " " << &n <<endl;

    int * nptr=&n;
    cout<<nptr<<endl;
    cout<<sizeof(nptr)<<endl;


    char ch='A';
    cout<<ch<<endl;


    char * chptr = &ch ;
    cout<< ch <<" "<< chptr<<endl;
    cout<<sizeof(chptr);


    return 0;

}
