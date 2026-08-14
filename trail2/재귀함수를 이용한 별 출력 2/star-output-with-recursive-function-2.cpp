#include <iostream>
#include <string>
using namespace std;

string mult_str(int n, string s) {
    string res;
    while(n--) {
        res += s;
    }
    return res;
}

void func(int n) {
    if (n == 0) {return;}
    
    cout << mult_str(n, "* ") << '\n';
    func (n-1);
    cout << mult_str(n, "* ") << '\n';
}

int main() {
    int n;
    cin >> n;
    func(n);

    return 0;
}