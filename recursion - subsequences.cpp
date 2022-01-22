#include<iostream>
using namespace std;

int sub(string inp,string out,int i,int j,int count){
    //base case
    if(inp[i]=='\0'){
        out[j]=='\0';
        cout<<out<<" ";
        count+=1;
        return count;
    }
    //recursive case
    char ch=inp[i];
	//not taking ith
    count=sub(inp,out,i+1,j,count);
    //taking ith
    count=sub(inp,out+ch,i+1,j+1,count);


    return count;
}

int main(){
    string inp;
    cin>>inp;
    string out;
int ans=sub(inp,out,0,0,0);
cout<<endl<<ans;
return 0;
}
