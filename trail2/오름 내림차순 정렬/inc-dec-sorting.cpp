#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for( int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for (int x : v) {cout << x << ' ';}
    sort(v.begin(), v.end(), greater<int>());
    cout << '\n';
    for (int x : v) {cout << x << ' ';}

    return 0;
}