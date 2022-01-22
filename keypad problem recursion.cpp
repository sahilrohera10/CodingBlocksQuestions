#include <iostream>
using namespace std ;
int count=0;
string keypadArr[] = { "" , "abc" , "def" ,"ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wx" , "yz"};

void keyPad(string s, string ans){

    //base case
    if(s.length() == 0){
        count++;
        cout<<ans<<" ";
        return ;
    }

    //recursive case
  char ch = s[0];
  string code = keypadArr[ch-'0'] ;
  string ros = s.substr(1);

  for(int i=0;i<code.length();i++){
      keyPad(ros , ans + code[i]);
  }

}

int main(){
    string s;
    cin>>s;
    keyPad(s, "");
    cout<<endl<<count;
}
