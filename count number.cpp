#include <iostream>
using namespace std;

int countCharacter(char* str){
    int count=0;
    for(int i=0;str[i]!=0;i++){
        count++;
    }
    return count;
}

int main() {

   char str[100];

   cin.getline(str,100);

  cout<< countCharacter(str);

    return 0;
}
