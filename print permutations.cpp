#include<iostream>
#include<cstring>


using namespace std;

void generatePermutations(char* inp, int i) {

	// base case
	if(inp[i] == '\0') {
		// string str(inp);
		// s.insert(str);
		cout << inp <<" ";
		return;
	}

	// recursive case

	// You are standing at the ith position, and you've to decide
	// which character is assigned to the ith position

	for(int j=i; j<strlen(inp); j++) {
		swap(inp[i], inp[j]);
		generatePermutations(inp, i+1);
		swap(inp[i], inp[j]); // backtracking
	}
}

int main() {

	char inp[3000];
    cin>>inp;
	// set<string> s;

	generatePermutations(inp, 0);

// cout<<inp;


	// for(auto x : s) {
    //     if(x < inp )
	// 	{cout << x << endl;}
	// }

	return 0;
}
