#include <iostream>
#include <cstring>
using namespace std;

void replacePi(char* arr , int i){


//base case
if(arr[i] == '\0'){
    return ;
}



//recursive case
if(arr[i] == 'p' and arr[i+1]=='i'){
    int n= strlen(arr);

    for(int k=n-1; k>=i;k-- ){
       arr[k+2] = arr[k];
    }

    arr[i] = '3';
    arr[i+1] = '.';
    arr[i+2] = '1';
    arr[i+3] = '4';

    replacePi(arr , i+4);

}

replacePi(arr , i+1);

}




int main() {
    int t;
    cin>>t;


    while(t--){
       char arr[1000];
       cin>>arr;

        replacePi(arr, 0);
         cout<<arr<<endl;
    }



    return 0;
}
