#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n, m, E, J;
    cin >> n >> m;

    E=0;

	for(int i=0; i<n; ++i){
		J=1e9;

		for(int j=0; j<m; ++j){	
			int c;
            cin >> c;

			J=min(J,c);
		}

		E=max(E,J);
	}

	cout << E;
}

int main() {
    solve();
    return 0;
}