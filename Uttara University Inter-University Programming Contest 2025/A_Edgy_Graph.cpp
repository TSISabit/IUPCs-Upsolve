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

// struct edge{
//     int u, v, w; 
// };
void solve() {
    int n, m; cin >> n >> m; 
    vi a(n, 1e9); 
    vector<array<int, 3>> edges(m); 

    for(int i = 0; i < m; i++){
        int u, v, w; 
        cin >> u >> v >> w; 
        u--; v--; 

        edges[i] = {u, v, w}; 
        a[u] = min(a[u], w); 
        a[v] = min(a[v], w);
    }

    for(int i = 0; i < m; i++){
        int u = edges[i][0]; 
        int v = edges[i][1]; 
        int w = edges[i][2]; 

        if(max(a[u], a[v]) != w){
            cout << -1 << nn; 
            return; 
        }
    }

    for(int i = 0; i < n; i++) cout << a[i] << " "; 
    cout << nn; 
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