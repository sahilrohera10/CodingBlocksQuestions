#include<iostream>

using namespace std;

int main() {


int mat[10][10];
int m,n;
cin>>m>>n;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
    }
}




	int sr = 0;
	int sc = 0;
	int er = m-1;
	int ec = n-1;

	while(sr <= er && sc <= ec) {
		for(int j=sc; j<=ec; j++) {
			cout << mat[sr][j] << ", ";
		}

		sr++;

		for(int i=sr; i<=er; i++) {
			cout << mat[i][ec] << ", ";
		}

		ec--;



		if(sr <= er) {
			for(int j=ec; j>=sc; j--) {
				cout << mat[er][j] << ", ";
			}

			er--;
		}



		if(sc <= ec) {
			for(int i=er; i>=sr; i--) {
				cout << mat[i][sc] << ", ";
			}

			sc++;
		}
	}
    cout<<"END";

	cout << endl;


	return 0;
}
