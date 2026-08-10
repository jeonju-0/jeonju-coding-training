#include <iostream>
using namespace std;

// 함수가 하는 일: 문자열을 n번 출력한다
void func(int n) {
    if (n == 0) {return;}
    
    func(n-1);
    cout << "HelloWorld" << '\n';
}
/*
수학적 귀납법 증명
n = 0: 아무것도 하지 않는다
n < k: 문자열을 k번 출력한다고 가정하자
n = k: func(k-1)에 의해 문자열을 k-1번 출력하고, 문자열을 한 번 더 출력하므로 총 k번 출력한다
*/


int main() {
    int n;
    cin >> n;
    func(n);
    
    return 0;
}