#include <iostream>
using namespace std;
int main() {
    int a[5]={10,20,30,50,40};
    int n=sizeof(a)/sizeof(int);
    bool has_swaped=false;
    for(int part=1;part<n;part++){
        for(int i=0;i<n-part;i++){
            if(a[i]>a[i+1]){
               swap(a[i],a[i+1]);
               has_swaped=true;
            }

        }
        if(has_swaped==false){
            break;
        }
    }
    for(int j=0;j<n;j++){
        cout<<a[j]<<endl;
    }
    return 0;
}
