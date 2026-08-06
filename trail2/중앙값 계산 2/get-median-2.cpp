#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int>& v, int x) {
    v.push_back(x);
    int i = v.size()-1;
    while (i > 0 && x < v[i-1]) {
        v[i] = v[i-1];
        --i;
    }
    v[i] = x;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        insertion(v, x);

        if (i%2 == 1) {
            cout << v[i/2] << ' ';
        }
    }

    return 0;
}