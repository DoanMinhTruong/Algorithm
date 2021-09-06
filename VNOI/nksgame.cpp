#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = long double;
#define sz(x) (int)(x).size()
#define pb push_back
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define rep(a) F0R(_,a)
#define FOREACH(a,x) for(auto& a: x)
#define len(x) (int)(x).length()
const int MOD = 1e9 + 7;
const char el = '\n';
const db PI = acos((db)-1);
const int mxN = 1e5 + 7 ;
ll a[mxN] , b[mxN];
int n;
ll bs(ll b[], ll x){
    if(x > b[n-1]) return b[n-1];
    if(x < b[0]) return b[0];
    int l = 0 , r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(b[mid] == x) return b[mid];
        else if(b[mid] <x ) l = mid+1;
        else r = mid-1;
    }
    if(abs(b[l] - x) < abs(b[r] -x)) return b[l];
    return b[r];
}

void solve(){
    cin >> n ;
    for(int i =0 ; i< n;i++) cin >> a[i];
    for(int i =0 ; i< n ;i++) cin >> b[i];
    sort(b, b+n);
    ll ans = 1e18;
    for(int i =0 ; i < n ;i++){
        ll x = bs(b,-a[i]);
        ll x2 = abs(a[i] + x);
        if(x2 == 0 ) {
            cout << 0 ;return;
        }
        if(x2 <ans) ans = x;
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1 ; 
    //cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
