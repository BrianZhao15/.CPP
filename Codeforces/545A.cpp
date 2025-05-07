#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, t;
    cin >> n;

	vector<int> A;

	for (int i=1; i<=n; ++i) {
		A.push_back(i);

		for(int j=0; j<n; ++j) {
			cin >> t;

			if(t==1||t==3) {
				A.erase(remove(A.begin(),A.end(),i),A.end());
            }
		}
	}

	cout << A.size() << "\n";

	for (int k=0; k<A.size(); ++k) {
		cout << A[k] << " ";
    }
}

int main() {
    solve();
    return 0;
}