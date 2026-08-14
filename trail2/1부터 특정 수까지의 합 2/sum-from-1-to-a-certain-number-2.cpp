#include <iostream>
using namespace std;

int func(int n) {
    if (n == 1) {return 1;}
    return n + func(n-1);
}
/*
n = 1: 1부터 1의 합은 1이므로, 1을 반환한다
n < k: 1부터 k까지의 합을 반환한다고 가정하자
n = k: 1부터 k-1까지의 합과 k를 합하므로 1부터 k까지의 합을 구한다
*/

int main() {
    int n;
    cin >> n;
    cout << func(n);

    return 0;
}