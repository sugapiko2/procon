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
    ll u = 1;
    rep(i,n){
        u *= 10;
        u %= INF;
    }
    ll bar0 = 1;
    ll bar9 = 1;
    ll bar0and9 = 1;
    rep(i,n){
        bar0 *= 9;
        bar0 %= INF;
        bar9 *= 9;
        bar9 %= INF;
        bar0and9 *= 8;
        bar0and9 %= INF;
    }
    ll res = u - (((bar0 + bar9)%INF) - bar0and9 + INF) % INF + INF;
    cout << res%INF << endl;
}