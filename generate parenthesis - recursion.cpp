#include<iostream>
using namespace std;

void gp(int n, int i, int open, int close, char output[]){
    //base case
    if(i==2*n){
		output[i]='\0';
        cout<<output<<endl;
        return;
    }
    if(close<open){
        output[i]=')';
        gp(n, i+1, open, close+1, output);
    }
    if(open<n){
        output[i]='(';
        gp(n,i+1,open+1,close,output);
    }
}

int main() {
    char output[100];
    int n;
    cin>>n;

    gp(n,0,0,0,output);
    return 0;
}
