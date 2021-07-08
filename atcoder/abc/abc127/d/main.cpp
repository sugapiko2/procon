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
    ll n,m;
    cin >> n >> m;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    vi b(m), c(m);
    rep(i,m) cin >> b.at(i) >> c.at(i);
    vector<P> vp(m);
    rep(i,m) vp.at(i) = make_pair(c.at(i), b.at(i));
    sort(vp.begin(), vp.end(), greater<>());
    vi x(n);
    ll counter = 0;
    rep(i,m){
        ll count = vp.at(i).second;
        ll num = vp.at(i).first;
        rep(j,count){
            if(counter<n) x.at(counter) = num;
            counter++;
        }
        if(counter>=n) break;
    }
    sort(a.begin(), a.end());
    ll res = 0;
    rep(i,n){
        res += max(a.at(i), x.at(i));
    }
    cout << res << endl;
}