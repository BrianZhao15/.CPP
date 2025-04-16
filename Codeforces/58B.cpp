#include <iostream>

void solve() {
    int n, denomination;
    std:: cin >> n;
    denomination=n;
    for(; n>=1; --n) {
        if(denomination%n==0) {
            denomination=n;
            std:: cout << denomination << " ";
        }
    }
}

int main() {
    solve();
    return 0;
}