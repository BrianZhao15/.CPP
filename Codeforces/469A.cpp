#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int res, n, p, q, passable[100];
    cin >> n >> p;

    res=0;

    for(int i=0; i<p; ++i) {
        cin >> passable[i];
    }

    cin >> q;

    for(int i=p; i<p+q; ++i) {
        cin >> passable[i];
    }

    sort(passable,p+q+passable);

    for(int i=0; i<p+q; ++i) {
        if(passable[i]!=passable[i+1]){
            ++res;
        }
    }

    if(res==n) {
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }
}

int main() {
    solve();
    return 0;
}