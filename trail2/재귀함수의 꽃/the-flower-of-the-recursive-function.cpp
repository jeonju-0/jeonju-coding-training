#include <iostream>
using namespace std;

void func(int n) {
    if (n == 0) {return;}

    cout << n << ' ';
    func(n-1);
    cout << n << ' ';
}
/*
수학적 귀납법 증명
n = 0: 아무것도 하지 않는다
n < k: n ~ 1, 1 ~ n 출력한다고 가정하자
n = k: func(k)가 k를 출력하고 func(k-1) 호출
func(k-1)이 k-1 ~ 1, 1 ~ k-1 출력
그 후 func(k)가 k를 출력
*/

int main() {
    int n;
    cin >> n;
    func(n);
    
    return 0;
}