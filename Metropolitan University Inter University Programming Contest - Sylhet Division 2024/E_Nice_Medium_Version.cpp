
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nn "\n"
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pb push_back
#define sz(x) (int)(x).size()

vi v;

void solve()
{
    int l, r;
    cin >> l >> r;

    int ans = upper_bound(all(v), r) - lower_bound(all(v), l);
    cout << ans << nn;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i = 1; i <= 18; i++){
        for(int j = 0; j < (1 << i); j++){
            int x = 0; 
            for(int k = i - 1; k >= 0; k--){
                x *= 10; 
                if(j & (1 << k)) x += 9; 
                else x += 6; 
            }
            v.pb(x); 
        }
    }
    sort(all(v)); 
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
