#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve() {
    string a1, a2;
    cin >> a1 >> a2;

    reverse(a2.begin(),a2.end());

    cout << stoll(a1)+stoll(a2);
}

int main() {
    solve();
    return 0;
}