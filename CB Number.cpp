#include <iostream>
using namespace std;

bool CBcheck(long long sub){
    if(sub == 0 || sub == 1){
        return false;
    }
    int x[] = {2,3,5,7,11,13,17,19,23,29};
    for(int i = 0; i < sizeof(x) / sizeof(int); i++){
        if(sub == x[i]){
            return true;
        }
    }
    for(int i = 0; i < sizeof(x) / sizeof(int) ; i++){
        if(sub % x[i] == 0){
            return false;
        }
    }
    return true;
}

bool isvalid(bool visted[] , int start, int end){
    for(int i = start; i < end; i++){
        if(visted[i]){
            return false;
        }
    }
    return true;
}



int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool visted[100] = {false};
    int count = 0;
    for(int len = 1; len <= s.length(); len++){
        for(int pos = 0; pos <= s.length() - len; pos++){
            int end = pos + len;
            string sub = s.substr(pos,len);
            if(CBcheck(stoll(sub)) && isvalid(visted,pos,end)){
                count++;
                for(int k = pos; k < end; k++){
                    visted[k] = true;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
