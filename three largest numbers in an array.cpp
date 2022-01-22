#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[5]={10,20,30,40,50};
    int n=sizeof(a)/sizeof(int);
    int largest1=INT_MIN;
    int largest2=INT_MIN;
    int largest3=INT_MIN;
    for(int i=0;i<n;i++){
       if(a[i]>largest1){
           largest3=largest2;
           largest2=largest1;
           largest1=a[i];
       }
       else if(a[i]>largest2){
           largest3=largest2;
           largest2=a[i];
       }
       else if(a[i]>largest3){
           largest3=a[i];
       }
    }
    cout<<largest1<<" "<<largest2<<" "<<largest3<<" ";

    return 0;
}
