#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
     int sumodd=0;
     int sumeven=0;
     int i=1;
     while(n>0){
         if (i%2!=0){
             sumodd += (n%10);
         }
         else{
             sumeven += (n%10);
         }
         n/=10;
         i++;
     }
     cout<<sumodd<<endl<<sumeven;

    return 0;
}
