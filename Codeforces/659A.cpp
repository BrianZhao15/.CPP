#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int n, b, a;
    cin >> n >> a >> b;

    for(int i=0; i<abs(b); ++i) {
        a-=b<0;
        a+=b>0;

        if(a==0) {
            a=n;
        }
        if(a==n+1) {
            a=1;
        }
    }

    cout << a;
}

int main() {
    solve();
    return 0;
}