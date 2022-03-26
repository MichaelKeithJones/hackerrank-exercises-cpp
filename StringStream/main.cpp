#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> temp;

    stringstream ss(str);

    std::size_t found = 0;
    do {
        int i;
        if (found) ss.seekg(found + 1);
        ss >> i;
        temp.push_back(i);
        found = str.find_first_of(",", found + 1);
    }while (found != std::string::npos);

    return temp;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}