#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n" 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define read(x) int x; cin >> x;
#define readv(v, n) vector<int> v(n); for (auto &i : v) cin >> i;
#define sz(x) (int)(x).size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define vi vector<int>
#define pb push_back
#define ppb pop_back

void solve() {
    read(n); 
    string s; cin >> s;
    if(n >= 5) {
        no 
        return; 
    } 
    bool ok = true; 
    for(int i = 0; i < n; i++){
        int num = 0; 
        for(int j = i; j < n; j++){
            num = num * 10 + (s[j] - '0'); 
            int len = j - i + 1; 

            if(num % len != 0){
                no 
                return; 
            }
        }
    }
    yes 
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
