#include <iostream>
using namespace std;

  bool isAnagram(char* str1, char* str2 ){
      int freq1[26]={};
      for(int i=0; str1[i]!='\0';i++){
          char ch=str1[i];
          int idx = ch -'a';
          freq1[idx]++;
      }
       int freq2[26]={};
      for(int i=0; str2[i]!='\0';i++){
          char ch=str2[i];
          int idx = ch -'a';
          freq2[idx]++;
      }

      for(int i=0; i<26;i++){
          if(freq1[i]!=freq2[i]){
              return false;
          }
      }

      return true;

  }


int main() {

    char str1[]={"abcbca"};
    char str2[]={"ccbbaa"};

    if(isAnagram(str1, str2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
