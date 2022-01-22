#include <iostream>
using namespace std;

void f(int & a){
    a++;
}


int main() {
   int x=0;
   f(x);
   cout<<x;

    return 0;
}
