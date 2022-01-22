#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2!=0){
            int j=1;
            while(j<=i){
                cout<<"1";
                j++;
            }
            cout<<endl;
        }
        else if(i%2==0){
            int j=1;
            while (j<=i){
                if(j==1 or j==i){
                    cout<<"1";
                }
                else{
                    cout<<"0";}
                j++;
            }cout<<endl;
        }
        i++;
    }


    return 0;
}
N
