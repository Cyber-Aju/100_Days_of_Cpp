/*
https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> integers;
    stringstream ss(str); // Initialize stringstream with the input string

    int num;
    char ch; // To capture the comma

    while (ss >> num) {
        integers.push_back(num);
        ss >> ch; // Read and discard the comma
    }

    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}