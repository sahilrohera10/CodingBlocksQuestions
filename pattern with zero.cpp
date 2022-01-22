#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){

                if(j==1 or j==i){
                    cout<<i;
                    cout<<" ";
                }
                else{
                    cout<<"0";
                    cout<<" ";
                }


            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
