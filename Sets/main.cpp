#include <iostream>
#include <set>
using namespace std;


int main() {
	
	set<int> s; //Creates a set of integers.
	int Q;		// Number of queries
	int y,		// Type of query
		x;		// A number

	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> y >> x;
		switch (y) {
			case 1: {
				s.insert(x);
			}break;
			case 2: {
				s.erase(x);
			}break;
			case 3: {
				set<int>::iterator itr = s.find(x);
				if (itr == s.end()) {
					cout << "No" << endl;
				}
				else {
					cout << "Yes" << endl;
				}
			}break;
		}
	}

	return 0;
}