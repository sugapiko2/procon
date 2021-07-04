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
    vi a(m), b(m), c(m);
    rep(i,m) cin >> a.at(i) >> b.at(i) >> c.at(i);
    vvi d(n, vi(n, INF));
    rep(i,m) d[a.at(i)-1][b.at(i)-1] = c.at(i);
    rep(i,n) d.at(i).at(i) = 0;
    ll res = 0;
    for (int k = 0; k < n; k++){       // 経由する頂点
        for (int i = 0; i < n; i++) {    // 始点
            for (int j = 0; j < n; j++) {  // 終点
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
        for (int i = 0; i < n; i++) {    // 始点
            for (int j = 0; j < n; j++) {  // 終点
                if(i==j) continue;
                if(d.at(i).at(j) == INF) continue;
                res += d[i][j];
            }
        }
    }
    cout << res << endl;
}