#include <iostream>
using namespace std;

  void copyString(char* dst, char* src){
      int i=0;
      for(;src[i]!=0;i++){
          dst[i]=src[i];
      }
      dst[i]='\0';
  }



int main() {

    char str1[100]={"hello"};
    char str2[]={"coding"};

    copyString(str1, str2);

    cout<<str1<<endl;



    return 0;
}
