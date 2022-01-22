#include <iostream>
#include <algorithm>
using namespace std;
int main() {

string str;
cin>>str;

int n=str.length();

for(int i=0;i<n;i++){
    // cout<<str[i]<<" ";
    if(str[i]>=65 and str[i]<=90){
        cout<<char(str[i]+32);
    }
    else{
        cout<<char(str[i]-32);
    }

}

    return 0;
}
