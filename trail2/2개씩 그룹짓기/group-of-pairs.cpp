#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int* arr = new int[2*n];
    for (int i = 0; i < 2*n; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+2*n);

    int best = 0;
    for (int i = 0; i < n; ++i) {
        best = max(best, arr[i] + arr[2*n-1 - i]);
    }
    cout << best;

    return 0;
}