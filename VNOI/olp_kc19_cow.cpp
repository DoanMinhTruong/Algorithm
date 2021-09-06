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
const int mxN = 1e3 + 7 ;
struct Point{
    ll x ,  y , r;
    Point(ll x, ll y ,ll r) {
        this->x = x;
        this->y = y;
        this->r = r;
    }
    ll range(ll a, ll b ){
        double kc = sqrt(pow(a-x , 2 ) + pow(b- y,2));
        ll ikc = kc;
        if(ikc == kc) ikc--;
        return ikc;
    }
};

void solve(){
    ll n , a ,b ;cin >> n >> a >> b;
    Point *P[n];
    ll ans = 1e18 ;
    for(int i =0 ; i < n ; i++){
        ll x, y ,z; cin >> x>> y >>z;
        P[i] = new Point(x,y,z);
        ll kc = P[i]->range(a,b);
        ans = min(ans , kc - z);
    }
    cout << ans << el;
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
