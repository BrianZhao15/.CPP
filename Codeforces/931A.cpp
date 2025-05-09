#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int c, s, n, m, b, a;
    cin >> a >> b;

    if(b<a) {
        swap(b,a);
    }

    m=b-a;

    if(m%2==0) {
        m/=2;

        cout << m*(m+1);
    }

    else {
        m=b+a;
        c=m/2;
        s=c-a;

        c=b-c;
        cout << s*(s+1)/2+c*(c+1)/2;
    }
}

int main() {
    solve();
    return 0;
}