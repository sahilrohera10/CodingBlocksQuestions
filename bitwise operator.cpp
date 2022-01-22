#include <iostream>
#include<bitset>
using namespace std;
int main() {
    int ans=0;
    for (int i=1;i<=7;i++){
        int n;
        cin>>n;
        ans=(ans^n);
    }cout<<ans;
    return 0;
}
