#include <iostream>
using namespace std;


int compareString(char* str1 , char* str2){
       int i=0;
       while(str1[i]!='\0' and  str2[i]!='\0'){
           if(str2[i] < str2[i]){
               return -1;
           }
           else if(str1[i]>str2[i]){
               return 1;
           }
           else{
               i++;
           }
       }
       if(str1[i]==str2[i]){
           return 0;
       }
       if(str1[i]=='\0'){
           return -1;
       }
   return 1;
}
int main() {

   char str1[]={"ABCD"};
   char str2[]={"ABCD"};


  int n= compareString(str1, str2);
  cout<<n;




    return 0;
}
