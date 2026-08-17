#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (c-a)*60 + ((60-b)+d)%60 + (b > d ? -60 : 0);

    return 0;
}