#include<iostream>
#include <climits>
using namespace std;

int sol(string s){
    int n=s.length();

    int total=0;
    //total will contain all distinct characters
    bool visited[26]={false};
    for(int i=0; i<n; i++){
        if(visited[s[i]]==false){
            visited[s[i]]= true;
            total++;
        }
    }
    int start=0, first= -1, min_len=INT_MAX;

    int count=0;
    int curr_count[256]={0};

    for(int j=0; j<n; j++){
        //kitne characters hai string mai uske count ke liye
        curr_count[s[j]]++;

        //agar distinct mila to count bdhaya
        if(curr_count[s[j]] == 1)
        count++;

        if(count == total){
            while(curr_count[s[start]] > 1){
                if(curr_count[s[start]] > 1)
                curr_count[s[start]]--;

                start++;
            }

            int window_len= j-start+1;
            if(min_len > window_len){
                min_len = window_len;
                first=start;
            }
        }
    }
    string str =s.substr(first,min_len);
    return str.length();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<sol(s)<<endl;
    }
    return 0;
}
