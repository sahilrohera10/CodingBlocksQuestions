#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    string str;
    cin>>str;


    int n=str.length();

    int i=0;
    // int j=0;;
    while(i<n){
        int count=0;
        int  j=i+1;
        while(j<n){

            if(char(str[i])==char(str[j])){
                count++;
                j++;
            }else{
                break;
            }

        }
        if(count !=0){
                cout<<char(str[i])<<count+1;

                }
                else{
                    cout<<char(str[i]);
                }
            i=j;
    }

    return 0;
}
