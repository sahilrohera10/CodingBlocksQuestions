#include <iostream>
using namespace std;

void bubbleSort(int arr[] , int n , int part ){

  //base case
   if(part == n){
       return ;
   }



  //recursive case

  for(int i=0;i<n-part;i++){
            if(arr[i]>arr[i+1]){
               swap(arr[i],arr[i+1]);
            }
        }
bubbleSort(arr , n , part+1);

}




int main() {

  int n;
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
      cin>>arr[i];
  }


 bubbleSort(arr , n ,1);

for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
}


//    int a[5]={50,40,30,20,10};
//     int n=sizeof(a)/sizeof(int);


//     for(int part=1;part<n;part++){
//         for(int i=0;i<n-part;i++){
//             if(a[i]>a[i+1]){
//                swap(a[i],a[i+1]);
//             }

//         }
//     }
//     for(int j=0;j<n;j++){
//         cout<<a[j]<<" ";
//     }



    return 0;
}
