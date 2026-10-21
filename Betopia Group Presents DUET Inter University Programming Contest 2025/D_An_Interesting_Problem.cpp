#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve() {
    int n; 
    cin >> n; 
    string s; 
    cin >> s;

    unordered_set<char> seen;
    bool repeated = false;

    for (char c : s) {
        if (seen.count(c)) {
            repeated = true;
            break;
        }
        seen.insert(c);
    }

    if (repeated) no
    else yes
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
