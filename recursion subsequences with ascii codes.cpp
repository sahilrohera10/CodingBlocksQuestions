#include <iostream>
using namespace std ;
int count =0;
void subSeq(string s , string ans){

    //base case
    if(s.length()==0){
        cout<<ans<<" ";
        count++;
        return ;
    }

    //recursive case

    char ch = s[0];
    int ascii = s[0];
    string ros = s.substr(1);

    subSeq(ros, ans);

    subSeq(ros, ans+ch);

    subSeq(ros, ans+to_string(ascii));
}

int main(){
string s;
cin>>s;
subSeq(s , "");
cout<<endl<<count;
return 0;
}

