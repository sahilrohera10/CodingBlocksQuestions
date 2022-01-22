#include<iostream>

using namespace std;

int main() {
     int n;
     cin>>n;
	int A[n];
    for(int k=0;k<n;k++){
        cin>>A[k];
    }

	for(int i=0; i<n-1; i++) {

		int min_idx = i;
		for(int j=i+1; j<n; j++) {
			if(A[j] < A[min_idx]) {
				min_idx = j;
			}
		}
		swap(A[i], A[min_idx]);
	}

	for(int i=0; i<n; i++) {
		cout << A[i] <<endl;
	}

	cout << endl;

	return 0;
}
