#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[1000];
    int k, n;
    cin >> k >> n;
    for (int i = 0; i < k; ++i) {
        cin >> arr[i];
    }

    sort(arr, arr+k);
    cout << arr[n-1];
    // Please write your code here.
    return 0;
}