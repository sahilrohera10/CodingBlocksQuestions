#include<iostream>
using namespace std;
int main() {


int N;
cin>>N;


 for(int i=1;i<=N;i++)     //"i"<=N MEIN N+1rows and N+1 columns needed; so "i" and
                             //   "j" start from "0";

 {  int no=N;


	 for(int j=1;j<=i;j++)
	 {cout<<no<<" ";
      no--;}

	  int x=N;

      for(int j=1;j<=2*N-2*i+1;j++)
       {cout<<" "<<" ";}

      int m=x-i+1;
     for(int j=1;j<=i;j++)
      {cout<<m<<" ";
       m++;}
//upper part complete
cout<<endl;
 }

//mid line
int m=N;
for(int i=0; i<=N;i++)
{
	cout<<m<<" ";
	m--;

}
int x=1;
for(int i=1;i<=N;i++)
{
	cout<<x<<" ";
	x++;

}
//midline complete
cout<<endl;  // upper part alag bana, lower alag ,and mid alag
              //toh mid ke khatam hone par cout<<endl is necessary;

for(int i=N;i>=1;i--)
 {  int no=N;


	 for(int j=1;j<=i;j++)
	 {cout<<no<<" ";
      no--;}
	  int x=N;

     for(int j=1;j<=2*N-2*i+1;j++)
     {cout<<" "<<" ";}

     int m=x-i+1;
      for(int j=1;j<=i;j++)
        {cout<<m<<" ";
        m++;}

cout<<endl;
 } //lower part complete



	return 0;

	}
