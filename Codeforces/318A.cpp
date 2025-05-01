#include <iostream>
using namespace std;

void solve() {
    int long long n, k;
    cin >> n >> k;

    if(k<=(n+1)/2) {
        cout << 2*k-1 << "\n";
    }
    else {
        cout << 2*(k-(n+1)/2) << "\n";
    }
} 

int main() {
    solve();
    return 0;
}