#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myGreaterComparator(int a, int b) { // return true when swap is not required
	return a > b;
}

bool myLesserComparator(int a, int b) { // return true when swap is not required
	return a < b;
}

int main() {

	// create a vector using initialiser list
	vector<int> v = {1, 0, 2, 4, 3};
	cout << "size : " << v.size() << endl;
	int n = v.size();
	for(int i=0; i<n; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	// reverse a vector
	reverse(v.begin(), v.end());

	for(int i=0; i<n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	// sort a vector
	sort(v.begin(), v.end()); // less<int> or myLessComparator
	for(int i=0; i<n; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	vector<int> v2 = {30, 20, 0, 10, 60, 50};

	// 1. using rbegin() & rend()

	// sort(v2.rbegin(), v2.rend());
	// for(int i=0; i<v2.size(); i++) {
	// 	cout << v2[i] << " ";
	// }

	// 2. using greater<int>

	// sort(v2.begin(), v2.end(), greater<int>()); // default is less<int> for sorting in inc. order
	// for(int i=0; i<v2.size(); i++) {
	// 	cout << v2[i] << " ";
	// }
	// cout << endl;

	// 3. using custom comparator
	sort(v2.begin(), v2.end(), myGreaterComparator);
	for(int i=0; i<v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;

	// 1. default

	// 2. using built-in comparator

	// 3. using custom comparator

	return 0;
}
