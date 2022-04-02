#include <cmath>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	int N;
	vector<int> v;
	int position, rangeBegin, rangeEnd;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cin >> position;
	cin >> rangeBegin >> rangeEnd;

	v.erase(v.begin() + position - 1);
	v.erase(v.begin() + rangeBegin - 1, v.begin() + rangeEnd - 1);

	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}