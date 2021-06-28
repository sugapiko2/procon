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
    vi a(n),b(n);
    rep(i,n) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);
    ll leftMax = -1;
    ll rightMin = INF;
    rep(i,n){
        leftMax = max(leftMax, a.at(i));
        rightMin = min(rightMin, b.at(i));
    }
    ll res = rightMin-leftMax+1;
    res = res >= 0 ? res : 0;
    cout << res << endl;
}