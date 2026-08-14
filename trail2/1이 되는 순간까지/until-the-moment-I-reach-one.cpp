#include <iostream>
using namespace std;

int func(int n, int cnt) {
    if (n == 1) {return cnt;}

    if (n%2 == 0)
        return func(n/2, cnt+1);
    else
        return func(n/3, cnt+1);
}

int main() {
    int n;
    cin >> n;
    cout << func(n, 0);
    
    return 0;
}