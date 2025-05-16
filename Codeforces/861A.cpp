#include <iostream>
using namespace std;

int gcd(int y, int x) {
    if(x==0) {
        return y;
    }

    return gcd(x,y%x);
}

void solve() {
    int long long k, res, n, t;
    cin >> n >> k;

    t=1;

    for(int i=0; i<k; ++i) {
        t*=10;
    }

    res=n*t*1LL/gcd(n,t);

    cout << res;
}

int main() {
    solve();
    return 0;
}