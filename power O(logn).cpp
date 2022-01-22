#include <iostream>
using namespace std;

int f(int n , int x ,int i){

    if(i==x){
        return 1;
    }



return n * f( n , x , i+1) ;


}


int main() {

int n , x;
cin>>n>>x;

cout<< f( n , x , 0) ;



    return 0;
}
