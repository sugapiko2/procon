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
    ll tmp = 0;
    ll changeCount = 0;
    ll ng = 2*sqrt(2*n);
    ll ok = 0;
    while (abs(ok - ng) > 1) {
        ll mid = (ok + ng) / 2;
        ll tmp = (mid*(mid+1))/2;
        if (tmp<=n+1) ok = mid;
        else ng = mid;
    }
    ll res = n - ok + 1;
    cout << res << endl;
}