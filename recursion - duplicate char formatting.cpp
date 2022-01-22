#include <iostream>
using namespace std;

void seperate(string str ,char ans[] ,  int i ,int j){


int m=str.length();

if(i==m){
    ans[j] = '\0';
    cout<<ans;
    return ;
}


//recursive case



if(str[i] == str[i+1]){

    ans[j] = str[i];
    j++;
    ans[j] = '*' ;
    j++;
    ans[j] = str[i+1] ;
    j++;


return seperate(str ,ans ,  i+2 ,j);

}
else{
    ans[j] = str[i];
    j++;
}

return seperate(str ,ans , i+1 ,j);


}



int main() {


string str;
cin>>str;

char ans[10000]={};


seperate(str , ans , 0 ,0);

// cout<<str;

    return 0;
}
