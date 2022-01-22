#include <iostream>
using namespace std;

void f(string str , char arr[] , int n , int i ,int t){

if(i == n){
    return ;
}


if(str[i] != 'x'){
    arr[t] = str[i] ;
    t++;
}

f(str , arr , n , i+1 ,t);


}




int main() {

string str;
cin>>str;
// int c=0;

int n=str.length();
// cout<<n;

// for(int i=0;i<n;i++){
//     if(str[i]=='x'){
//         c++;
//     }
// }
// cout<<c;

char arr[n];
for(int i=0;i<n;i++){
    arr[i] = 'x';
}

f(str , arr , n ,0 ,0 );



//  for(int i=0;i<5;i++){
//      cout<<arr[i];
//  }


for(int j=0;j<n;j++){
    cout<<arr[j];
}


    return 0;
}
