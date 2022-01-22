#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;

    int A[100000];
    int B[100000];

    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    for(int j=0;j<n;j++){
        cin>>B[j];
    }

    int ArrayList[100000];

int t=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
         if(A[i]==B[j]){
            ArrayList[t] = A[i];
            B[j] = INT_MIN;
            t++;
            break;
        }
    }
}

for (int part=1;part<t;part++){
    for(int i=0;i<t-part;i++){
        if(ArrayList[i]>ArrayList[i+1]){
            swap(ArrayList[i], ArrayList[i+1]);
        }
    }
}



    for(int k=0;k<t;k++){
        cout<<ArrayList[k]<<" ";
    }
    return 0;
}
