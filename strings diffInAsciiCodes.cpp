#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    string str;
    cin>>str;

    int n=str.length();


    for(int i=0; i<n;i++){
        if(i==0){
         for(int j=i+1;j<n;j++){
             int diff= str[j]-str[i];
             cout<<char(str[i])<<diff<<char(str[j]);
             break;
         }
         }
         else{
             for(int j=i+1;j<n;j++){
             int diff= str[j]-str[i];
             cout<<diff<<char(str[j]);
             break;
         }
         }


    }

    return 0;
}
