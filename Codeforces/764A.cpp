#include <iostream>
using namespace std;

void solve() {
    int n, o, m, z;
    cin >> n >> m >> z;

    o=0;

    for(int i=1; i<=z; ++i) {
        if(i%n==0&&i%m==0) {
            ++o;
        }
    }

    cout << o;
}

int main() {
    solve();
    return 0;
}