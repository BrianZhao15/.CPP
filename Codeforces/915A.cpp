#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int hours=0;

    int n, k, a[101];
    cin >> n >> k;
    
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }

    sort(a,a+n);

    for(int j=0; j<n; ++j) {
        if(k%a[j]==0) {
            hours=k/a[j];
        }
    }

    cout << hours;
}

int main() {
    solve();
    return 0;
}