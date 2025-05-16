#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    s[0]=towupper(s[0]);

    cout << s;
}

int main() {
    solve();
    return 0;
}