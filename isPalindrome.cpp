#include <iostream>
#include <cstring>
using namespace std;

void isPalidrome(char* str){
      int i=0;
   int j=strlen(str)-1;
   while(i>j){
       if(str[i] != str[j]){
           cout<<"false";
       }
       else{
           i++;
           j--;
       }
   }
   cout<<"true";
}

int main() {

   char str[]={"nitin"};
   isPalidrome(str);



    return 0;
}
