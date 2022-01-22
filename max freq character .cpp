#include<iostream>
#include<climits>
using namespace std;
int main() {
	char alphabets[26]={'a','b','c','d','e','f','g','h','i','j'
,'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string str;
cin>>str;
int freq[26]={};
//freq ki int array banegi
//string nhi bcz string mein characters store hote hai

for(int i=0;i<str.length();i++){

char ch=str[i];

int idx=ch-'a';
freq[idx]+=1;


}



int max_freq=INT_MIN;

int p;

for(int i=0;i<26;i++){

  if(freq[i]>max_freq){ max_freq=freq[i];
                       p =i;}

}
cout<< alphabets[p];


	return 0;
}
