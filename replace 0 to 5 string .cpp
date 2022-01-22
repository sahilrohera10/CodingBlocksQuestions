#include<iostream>
#include<cstring>
using namespace std;
int main(){
// int A[100]={};
// int N;
// cin>>N;
// int i=0;
// int count=0;
// while(N!=0){

// 	int r=N%10;
// 	A[i]=r;
// 	i++;
// 	count++;
// 	N=N/10;

// }
// for(int i=0;i<count ;i++){
// 	if(A[i]=='0'){A[i]='5';}
// }

// for(int i=count;i>=0;i++){
// 	cout<<A[i];
// }



string str;
cin>>str;

int n=str.length();

for(int i=0;i<n;i++){
    if(str[i] == '0'){
        str[i] = '5';
    }
}

cout<<str;

return 0;
}




