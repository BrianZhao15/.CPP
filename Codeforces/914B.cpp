#include <iostream>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    map<int, int> game;

    for(int i=0, x; i<n; ++i) {
        cin >> x;

        ++game[x];
    }

    for(auto it:game) {
        if(it.second%2) {
            cout << "Conan";
            return;
        }
    }

    cout << "Agasa";
}

int main() {
    solve();
    return 0;
}