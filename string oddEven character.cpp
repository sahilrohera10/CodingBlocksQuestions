#include <iostream>
#include <algorithm>
using namespace std;

void evenOdd(string  str , int n   ){

   for(int i=0;i<n;i++){

        if(i%2==0){
            str[i]=char(str[i]+1);
        }
        else{
            str[i]=char(str[i]-1);
        }


   }
    cout<<str;

}
int main() {


 string str;
 cin>>str;
 int n=str.length();

 evenOdd(str , n);


    return 0;
}
