#include <iostream>
using namespace std;

void generateBinaryString(string str , int i , int n){
    //base case
    if( i == n){
        cout<<str<<" ";
        return ;
    }

    // recursive case
    if(str[i] == '?'){
        str[i] = '0';
        generateBinaryString(str , i+1 , n);

        str[i] = '1';
        generateBinaryString(str , i+1 , n);
    }
    else{
        generateBinaryString(str , i+1 , n);
    }
}



int main() {

int t;
cin>>t;
while(t--){

   string str;
   cin>>str;

   int n = str.length();

   generateBinaryString(str , 0 , n);
   cout<<endl;

}

    return 0;
}
