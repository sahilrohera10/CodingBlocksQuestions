#include <iostream>
using namespace std;

 string map[]={"zero" ,"one","two", "three", "four", "five" , "six" , "seven" , "eight", "nine"};

void f(int n){
    if(n==0){
        return ;
    }

    int d=n%10;
cout<<map[d]<<" ";
    f(n/10);
}



int main() {

    int n=123;
    f(n);
    return 0;
}
