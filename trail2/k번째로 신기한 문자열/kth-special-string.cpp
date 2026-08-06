#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k; string t;
    cin >> n >> k >> t;
    vector<string> v;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s.compare(0, t.length(), t) == 0) {
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end());
    cout << v[k-1];

    return 0;
}