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
    vi a(n), b(n);
    rep(i,n) cin >> a.at(i) >> b.at(i);
    ll sum = 0;
    rep(i,n) sum -= a.at(i);
    vi c(n);
    rep(i,n) c.at(i) = 2*a.at(i) + b.at(i);
    sort(c.begin(), c.end(), greater<>());
    ll res = 0;
    rep(i,n){
        sum += c.at(i);
        if(sum>0){
            res = i+1;
            break;
        }
    }
    cout << res << endl;
}
