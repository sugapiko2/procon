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

bool sf(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b) {
    if(get<1>(a) > get<1>(b)) return false;
    return true;
}

int main() {
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    ll n,k;
    cin >> n >> k;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    vector<tuple<ll,ll,ll>> vp;
    rep(i,n) vp.push_back(make_tuple(i,a.at(i),0));
    sort(vp.begin(), vp.end(), sf);
    // rep(i,n) cout << get<1>(vp.at(i)) << endl;
    ll res = 0;
    res += k/n;
    ll remain = k%n;
    rep(i,remain) get<2>(vp.at(i))++;
    sort(vp.begin(), vp.end());
    rep(i,n){
        cout << res + get<2>(vp.at(i)) << " " << endl;
    }
}