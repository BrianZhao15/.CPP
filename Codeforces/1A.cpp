#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    int long long n, m, a;
    cin >> n >> m >> a;

    if (n%a==0 && m%a==0) {cout << (int long long)(n*m/(a*a));} else {cout << (int long long)(ceil((double)n/a)*ceil((double)m/a));}
}

int main() {
    solve();
    return 0;
}