#include <iostream>
#include <cstring>
using namespace std;

  void concateString(char* dst, char* src){
      int i=0;
      int n=strlen(dst);
      for(;src[i]!=0;i++){
          dst[n+i]=src[i];
      }
      dst[n+1+i]='\0';
  }


int main() {

char str1[199]={"hello"};
    char str2[]={"coding"};

    concateString(str1, str2);

    cout<<str1<<endl;


    return 0;
}
