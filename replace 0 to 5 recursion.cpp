#include <iostream>
using namespace std;

void replace(string str ,char ans[],  int i , int n , int j){

//base case

    if(i==n){
        ans[j] = '\0';
        cout<<ans;
        return ;
    }



//recursive case

  if(str[i] == '0'){
      ans[j] = '5';
      j++;
      return replace(str ,ans ,  i+1 , n , j);
  }

ans[j] = str[i];
j++;

  return replace (str ,ans ,  i+1 , n , j);

}




int main() {

string str;
cin>>str;

char ans[10000]={};

int n = str.length();

replace(str ,ans  , 0 , n , 0);



return 0;

}
