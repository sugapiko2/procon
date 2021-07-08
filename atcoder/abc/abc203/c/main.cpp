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
    ll n,k;
    cin >> n >> k;
    vi a(n), b(n);
    rep(i,n) cin >> a.at(i) >> b.at(i);
    vector<P> vp(n);
    rep(i,n) vp.at(i) = make_pair(a.at(i), b.at(i));
    sort(vp.begin(), vp.end());
    ll res = k;
    rep(i,n){
        if(res >= vp.at(i).first) res += vp.at(i).second;
        else break;
    }
    cout << res << endl;
}