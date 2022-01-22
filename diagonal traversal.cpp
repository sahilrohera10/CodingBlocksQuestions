#include <iostream>
using namespace std;
int main() {
     int n,m;
    cin >>m>> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans[m+n][m]={};
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ans[i+j][i]=arr[i][j];
        }
    }


    int count=0;
    for(int i=0; i<m+n; i++){
        if(count%2==0){
        for(int j=m-1; j>=0; j--){
                if(ans[i][j]!=0){
                cout<<ans[i][j]<<" ";
            }
        }count++;
        }else{
            for(int j=0; j<m; j++){
            if(ans[i][j]!=0){
                cout<<ans[i][j]<<" ";
            }
            }
            count++;
        }
    }

return 0;
}
