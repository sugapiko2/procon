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
    vi a(n), p(n), x(n);
    rep(i,n) cin >> a.at(i) >> p.at(i) >> x.at(i);
    vi buy(n);
    rep(i,n){
        if(a.at(i)<x.at(i)) buy.at(i) = p.at(i);
    }
    sort(buy.begin(), buy.end());
    ll res = -1;
    rep(i,n) if(buy.at(i)!=0){
        res = buy.at(i);
        break;
    }
    cout << res << endl;
}
