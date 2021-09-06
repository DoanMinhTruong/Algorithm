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
string F[101];
string sum(string s1, string s2){
    if(len(s1) > len(s2)){
        swap(s1,s2);
    }
    string str = "";
    int n1 = len(s1)  , n2 = len(s2);
    reverse(all(s1));
    reverse(all(s2));
    int carry = 0 ;
    for(int i =0 ; i< n1 ; i++){
        int sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        str.pb(sum%10 +'0');
        carry = sum/10;
    }
    for(int i =n1; i<n2; i++){
        int sum = (s2[i] - '0') + carry;
        str.pb(sum%10 +'0');
        carry = sum/10;
    }
    if(carry)
        str.pb(carry+'0');
    reverse(all(str));
    return str;
}
void solve(){
    int n ; cin >> n ;
    cout <<F[n] << el;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1 ;
    F[0]= "1" ; F[1] = "1";
    for(int i = 2 ;i < 101 ; i++){
        F[i] = sum(F[i-1] , F[i-2]);
    }
    cin >> t ;
    while(t--){
        solve();
    }
    return 0;
}
