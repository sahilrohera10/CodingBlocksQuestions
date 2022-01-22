#include<iostream>

using namespace std;

void f(int n, int* QPos, int r) {

	// base case
	if(r == n) {
		// you've placed all the n queens therefore you can stop and
		// print the solution you've built
		// for(int i=0; i<n; i++) {
		// 	cout << QPos[i] << " ";
		// }
		// cout << endl;

		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(QPos[i] == j) {
					cout << "Q ";
				} else {
					cout << "- ";
				}
			}
			cout << endl;
		}
		cout << endl;

		return;
	}

	// place Qr in the jth column of row 'r' where 0 <= j < n
	// such that upon placing Qr in the jth column of row 'r'
	// it doesn't attack any previously placed queen Qi where,
	// 0 <= i <= r-1

	for(int j=0; j<n; j++) {

		// check if the jth column of row r is a valid column to place Qr or not

		bool canPlace = true; // assume the jth column is a valid column

		for(int i=0; i<=r-1; i++) {
			if(QPos[i] == j || QPos[i] == j-(r-i) || QPos[i] == j+(r-i)) {
				canPlace = false;
				break;
			}
		}

		if(canPlace) {
			QPos[r] = j;
			f(n, QPos, r+1);
		}
	}

}

int main() {

	int n = 4;
	int QPos[10];

	f(n, QPos, 0);

	return 0;
}
