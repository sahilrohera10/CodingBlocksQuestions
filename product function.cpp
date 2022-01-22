#include <iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}

int main() {
    int x,y;
    cin>>x>>y;
    cout<<"product is = "<<product(x,y);
    return 0;
}
