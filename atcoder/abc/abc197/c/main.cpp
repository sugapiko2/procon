#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)
using vi = vector<int64_t>;
using vvi = vector<vi>;
using ll = int64_t;
using P = pair<ll,ll>;
ll INF = 1000000007;
// ll INF = 9223372036854775807;
// ll INF = 998244353;

int main() {
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    ll n;
    cin >> n;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    vi ress;
    rep(i,1<<(n-1)){
        vi b;
        ll temp = a.at(0);
        rep(j,n-1){
            if((1<<j)&i){
                b.push_back(temp);
                temp = a.at(j+1);
            }else{
                temp |= a.at(j+1);
            }
        }
        b.push_back(temp);
        ll res = 0;
        for(ll x:b) res ^= x;
        ress.push_back(res);
    }
    sort(ress.begin(), ress.end());
    cout << ress.at(0) << endl;
}