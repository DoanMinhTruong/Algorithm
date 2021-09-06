#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n ;
    cin >> n ;
    vector<int> a(n);
    map<int, int> ma;
    for(int& i : a ){
        cin >> i ;
        ma[i]++;
    }
    n--;
    for(int i =0; i < 2; i++, n--){
        vector<int> temp(n);
        map<int,int>mi;
        for(int& i : temp){
            cin >> i; 
            mi[i]++;
        }

        for(auto [i,j] : ma){
            if(mi[i] != ma[i]){
                cout << i << "\n";
                ma[i] = mi[i];
                break;   
            }
        }
    }
}
