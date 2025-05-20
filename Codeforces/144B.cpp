#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool needBlanketRemedy(int r, int x1, int x2, int y1, int y2) {
	return r*r<(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

void solve() {
	int res, r, n, x1, x2, x, y1, y2, y;
	cin >> x1 >> y1 >> x2 >> y2 >> n;
	
	res=0;
	
	vector<pair<int, int>> generals;
	
	if(x1>x2) {
		swap(x1,x2);
	}
	
	if (y1>y2) {
		swap(y1,y2);
	}
		
	for(int i=x1+1; i<x2; ++i) {
		generals.push_back({i,y1});
		generals.push_back({i,y2});
	}
	
	for(int i=y1; i<=y2; ++i) {
		generals.push_back({x1,i});
		generals.push_back({x2,i});
	}

	vector<tuple<int, int, int>> radiators;

	for (int i=0; i<n; ++i) {
		cin >> x >> y >> r;
		
		radiators.push_back({x,y,r});
	}

	for(auto &[xPrime,yPrime]:generals) {
		bool heated=false;
		
		for(auto &[x,y,r]:radiators) {
			if(!needBlanketRemedy(r,x,xPrime,y,yPrime)) {
				heated=true;
				break;
			}
		}
		
		if (!heated) {
			++res;
		}
	}
	
	cout << res;
}

int main() {
	solve();
	return 0;
}