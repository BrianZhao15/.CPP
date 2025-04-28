#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int N, L, l[1001]={0};
    cin >> N;

    while(N--) {
        cin >> L;
        l[L]+=1;
    }

    cout << *max_element(l,l+1001) << " " << 1001-count(l,l+1001,0);
}

int main() {
    solve();
    return 0;
}