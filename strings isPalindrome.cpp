#include <iostream>
#include <algorithm>
using namespace std;
int main() {

  string str;
  cin>>str;

  int n=str.length();



  int i=0;
  int j=n-1;

  while(i<j){

     if( char(str[i]) != char(str[j]) ){
         cout<<"false"<<endl;
         return 0;
     }


      i++;
      j--;
  }
  cout<<"true"<<endl;



    return 0;
}
