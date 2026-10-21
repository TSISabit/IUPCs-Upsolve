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

const int MAXN = 1000000;
const int MOD = 998244353;

int fact[MAXN + 1];
int invFact[MAXN + 1];
int ans[MAXN + 1];

int power(int base, int exp){
    int res = 1; 
    base %= MOD; 
    while(exp > 0){
        if(exp % 2 == 1) res = (res * base) % MOD; 
        base = (base * base) % MOD; 
        exp /= 2; 
    }
    return res; 
}

int modInverse(int n){
    return power(n, MOD-2); 
}

void solve() {
    fact[0] = 1;
    invFact[0] = 1; 
    for(int i = 1; i <= MAXN; i++) fact[i] = (fact[i - 1] * i) % MOD; 
    invFact[MAXN] = modInverse(fact[MAXN]); 
    for(int i = MAXN - 1; i >= 1; i--) invFact[i] = (invFact[i + 1] * (i + 1)) % MOD; 

    ans[0] = 0; 
    for(int i = 1; i <= MAXN; i++){
        int g; 
        if(i % 2 != 0) g = 1; 
        else{
            int k = i / 2; 
            int binom = fact[i] * invFact[k] % MOD * invFact[k] % MOD; 
            g = binom ^ 1; 
        }
        ans[i] = ans[i - 1] ^ g; 
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    int t; cin >> t;
    while (t--) {
        
        read(n); 
        cout << ans[n] << nn; 
    }
    return 0;
}