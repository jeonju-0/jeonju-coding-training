#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (char ch : s) {cout << ch;}
    
    return 0;
}