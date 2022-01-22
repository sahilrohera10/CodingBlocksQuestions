#include <iostream>
using namespace std;
int main() {


int n , m , k , s;

cin>>n>>m>>k>>s;

char array [n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>array[i][j];
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(j != m-1 and array[i][j] != '#'){
          s=s-1;
        }
        // s=s-1;
        if(s>k){
        if(array[i][j]== '.' ){
            // s=s-1;
            s=s-2;
        }
        else if(array[i][j]== '*' ){
            // s=s-1;
            s=s+5;
        }
        else if(array[i][j]== '#'){

            break;
        }
      }
      else{
          cout<<"No";
          return 0;
      }
    }
}

cout<<"Yes"<<endl;
cout<<s;

   return 0;
}
