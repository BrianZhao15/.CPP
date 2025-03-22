#include <iostream>
#include <string>

void solve() {
    std:: string a, b;
    std:: cin >> a >> b;

    int c = stoi(a) + stoi(b);

    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());
    
    std:: string c1 = std:: to_string(c);
    c1.erase(remove(c1.begin(), c1.end(), '0'), c1.end());

    if (stoi(c1) != stoi(a) + stoi(b)) {
        std:: cout << "NO";
    }
    else {
        std:: cout << "YES";
    }
}

int main() {
    solve();
    return 0;
}