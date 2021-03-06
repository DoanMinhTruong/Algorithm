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
int ch[25] ;
void solve(){
    string  s; cin >> s;
    int n ; cin >> n;
    for(int i =0 ; i <= 25 ; i++){
        if(n==26) n = 0 ;
        ch[i] = n++;
    }
    int ans = 0 ;
    for(char i : s ){
        ans += ch[i-'a'];
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
