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
    ll n,C;
    cin >> n >> C;
    vi a(n), b(n), c(n);
    rep(i,n) cin >> a.at(i) >> b.at(i) >> c.at(i);
    vector<tuple<ll,ll,ll>> tl;
    rep(i,n) tl.push_back(make_tuple(a.at(i), 0, c.at(i)));
    rep(i,n) tl.push_back(make_tuple(b.at(i) + 1, 1, c.at(i)));
    sort(tl.begin(), tl.end());
    ll csum = 0;
    ll date = 0;
    ll duration = 0;
    ll ci = 0;
    ll res = 0;
    ll cost = 0;
    rep(i,2*n){
        duration = get<0>(tl.at(i)) - date;
        cost = C >= csum ? csum : C;
        res += cost * duration;
        ci = get<2>(tl.at(i));
        csum += get<1>(tl.at(i)) == 0 ? ci : (-ci);
        date = get<0>(tl.at(i));
    }
    cout << res << endl;
}
