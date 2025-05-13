#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(max(3*a/10,a-c*a/250)==max(3*b/10,b-d*b/250)) {
        cout << "Tie";
    }
    else if(max(3*a/10,a-c*a/250)==max(3*b/10,b-d*b/250)) {
        cout << "Misha";
    }
    else {
        cout << "Vasya";
    }
}

int main() {
    solve();
    return 0;
}