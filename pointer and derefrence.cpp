#include <iostream>
using namespace std;
int main() {

    int n =10;

    int * nptr = &n;
    cout<<n<<" "<<nptr<<endl;
    cout<<sizeof(nptr)<<endl;

    cout<<*nptr<<endl;
    return 0;
}
