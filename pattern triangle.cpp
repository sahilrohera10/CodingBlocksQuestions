#include<iostream>
using namespace std;
int main() {
       int n;
       cin>>n;
	int i = 1;
	while(i <= n) {
		int j = 1;
		while(j <= n-i) {
			cout << "  ";
			j++;
		}
		int no = i;
		j = 1;
		while(j <= i) {
			cout << no << " ";
			j++;
			no++;
		}
		no = no - 2;
		j = 1;
		while(j <= i-1) {
			cout << no << " ";
			no--;
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
