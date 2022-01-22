#include<iostream>
using namespace std;

int sol(int arr[], int i, int left, int right, string s, string x, int n,int count)
{
    //base case
    if(i==n)
    {
        if(left==right){
            cout<<s<<"and "<<x<<endl;
            count+=1;
            return count;
        }else{
            return count;
        }
    }
    //recursive case

    //1. left mai plus krenge
    count=sol(arr,i+1,left+arr[i],right,s + to_string(arr[i])+" ",x,n,count);
    //2. right mai plus krenge
    count=sol(arr,i+1,left,right+arr[i],s,x + to_string(arr[i])+" ",n,count);

    return count;
}

int main()
{
   int N;
   cin>>N;
   int* arr=new int[N];
   for (int i=0; i<N; i++){
       cin>>arr[i];
   }
   int ans=sol(arr,0,0,0,"","",N,0);
   cout<<ans;
    return 0;
}
