#include <iostream>
#include <set>
using namespace std;

int n;

void func(set<int>& st) {
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        st.insert(x);
    }
}

int main() {
    set<int> a, b;
    cin >> n;
    func(a);
    func(b);
    cout << (a == b ? "Yes" : "No");

    return 0;
}