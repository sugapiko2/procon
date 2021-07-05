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
    vector<string> s(n);
    vi t(n);
    rep(i,n) cin >> s.at(i) >> t.at(i);
    vector<pair<ll,string>> vp(n);
    rep(i,n) vp.at(i) = make_pair(t.at(i), s.at(i));
    sort(vp.begin(), vp.end(), greater<>());
    cout << vp.at(1).second << endl;
}