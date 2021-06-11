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
    ll n, m;
    cin >> n >> m;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    vi x(m), y(m);
    rep(i,m) cin >> x.at(i) >> y.at(i);
    vvi vv(n);
    rep(i,m) vv.at(y.at(i)-1).push_back(x.at(i)-1);
    vi memo(n, INF);
    memo.at(0) = a.at(0);
    ll res = -2 * INF;
    for(ll i=1; i<n; i++){
        if(vv.at(i).size() == 0){
            memo.at(i) = a.at(i);
            continue;
        }
        ll imin = INF;
        for(ll from : vv.at(i)){
            ll sell = a.at(i) - memo.at(from);
            res = max(res, sell);
            ll t = min(memo.at(from), a.at(i));
            imin = min(imin, t);
        };
        memo.at(i) = imin;
    }
    cout << res << endl;
}
