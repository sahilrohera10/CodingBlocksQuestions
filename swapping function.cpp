#include <iostream>
using namespace std;

  void  swapping(int & a,int & b){
    //    swap(a,b);
    //    cout<<a<<" "<<b;

    int temp=a;
    a=b;
    b=temp;
   }

int main() {
   int a,b;
   cin>>a>>b;
   cout<<"before swapping a= "<<a<<" and b= "<<b<<endl;
   swapping(a,b);
   cout<<"after swapping a= "<<a<<" and b= "<<b;

    return 0;
}
