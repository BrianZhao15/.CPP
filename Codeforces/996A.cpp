#include <iostream>
using namespace std;

void solve() {
    int res,n,a[]={1,5,10,20,100};
    cin >> n;

    res=0;

    for(int i=4; i>=0; --i) {
        res+=n/a[i];

        n%=a[i];
    }

    cout << res;
}

int main() {
    solve();
    return 0;
}