#include <iostream>
using namespace std;

void solve() {
    int n, res=0;
    cin >> n;

    string s;
    cin >> s;

    for(char c:s) {
        if(c=='A') {
            ++res;
        }
        else {
            --res;
        }
    }

    if(res==0) {
        cout << "Friendship";
    }
    else if(0<res) {
        cout << "Anton";
    }
    else {
        cout << "Danik";
    }
}

int main() {
    solve();
    return 0;
}