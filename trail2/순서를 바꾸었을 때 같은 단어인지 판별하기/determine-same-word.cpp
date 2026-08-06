#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int arr[10+26+26] = {0};
    for (int t = 0; t < 2; ++t) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i) {
            int idx = 0;
            if      (isdigit(s[i])) {idx = s[i] - '0';}
            else if (islower(s[i])) {idx = 10 + s[i] - 'a';}
            else if (isupper(s[i])) {idx = 10 + 26 + s[i] - 'A';}

            t == 0 ? arr[idx]++ : arr[idx]--;
        }
    }

    bool ans = true;
    for (int i = 0; i < 10+26+26; ++i) {
        if (arr[i] != 0) {ans = false;}
    }
    cout << (ans ? "Yes" : "No");

    return 0;
}