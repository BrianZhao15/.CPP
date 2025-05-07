#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

void solve() {
    string m, n, b, a;
    cin >> a >> b;

    m='0',n='0';

    int long long M=stoll(m), N=stoll(n); 

    for(int i=0; i<a.size(); ++i) {
        if(b[i]!=a[i]) {
            if(a[i]=='4') {
                ++N;
            }
            else {
                ++M;
            }
        }
    }

    cout << abs(M-N)+min(M,N);
}

int main() {
    solve();
    return 0;
}