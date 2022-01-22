#include <iostream>
using namespace std ;

void replace(string s ){


//base case
  if(s.length() == 0){
    return ;
  }

//recursive case
if(s[0] == 'p' and s[1] == 'i'){
    cout<<"3.14";
    replace(s.substr(2));
}
else{
    cout<<s[0];
    replace(s.substr(1));
}

}

int main (){

    int n;
    cin>>n;

    while(n--){
        string str;
        cin>>str;
        replace(str);

    }


return 0;
}
