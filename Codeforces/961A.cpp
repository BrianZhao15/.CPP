#include <iostream>
#include <algorithm>
using namespace std;
 
void solve() {
    int n, m, c[1001]={0};
    cin >> n >> m;
 
    for(int i=0, value; i<m; ++i) {
        cin >> value;
        --value;

        ++c[value];
    }
 
    int comp=1001;
 
    for(int i=0; i<n; ++i) {
        comp=min(comp,c[i]);
    }
 
    cout << comp;
}
 
int main() {
    solve();
    return 0;
}