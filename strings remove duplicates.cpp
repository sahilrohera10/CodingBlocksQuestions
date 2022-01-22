#include <iostream>
#include <cstring>
using namespace std;
int main() {

string str;
cin>>str;

char ans[200];

int n = str.length();

int i=0;
int t=0;
while(i<n){

        if(char(str[i]) != char(str[i+1])){
            ans[t]= char(str[i]);
            t++;
        }


    i++;
}
ans[t]='\0';
int m=strlen(ans);
for(int i=0; i<m ; i++){
    cout<<ans[i];
}


    return 0;
}
