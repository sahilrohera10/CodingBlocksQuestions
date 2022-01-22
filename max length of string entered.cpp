#include <iostream>
#include <cstring>
using namespace std;
int main() {

   int max_lenght =0;
   char max_lenghtStr[100];
   char str[100];
   int n;
   cin>>n;
   cin.ignore();
   while(n--){
           cin.getline(str,100);
           int m=strlen(str);
           if(m>max_lenght){
                max_lenght=m;
                strcpy(max_lenghtStr,str);
           }

       }


   cout << max_lenght<<endl;
   cout << max_lenghtStr<<endl;


    return 0;
}
