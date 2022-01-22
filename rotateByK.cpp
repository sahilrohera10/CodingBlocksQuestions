#include <iostream>
#include <cstring>
using namespace std;

  void rotateByK(char* str , int k){
      int n=strlen(str);
      for(int i=n;i>=0;i--){
          str[i+k]=str[i];
      }

      for(int i=0;i<k;i++){
          str[i] = str[n+i];
      }
      str[n]='\0';

      cout<<str;
  }


int main() {

  char str[200]={"helloworld"};


  int k=3;

  rotateByK(str , k);



    return 0;
}
