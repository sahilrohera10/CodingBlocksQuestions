#include <iostream>
using namespace std;

int findAns(int n){

  //base case
  if(n==1){
      return 1;
  }

  //recursive case
return n + findAns(n-1);

}

int main() {
    int n;
    cin>>n;

   cout<< findAns(n);
}
