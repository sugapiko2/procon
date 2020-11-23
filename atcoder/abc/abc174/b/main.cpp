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
    ll n,d;
    cin >> n >> d;
    vi x(n), y(n);
    rep(i,n) cin >> x.at(i) >> y.at(i);
    ll res = 0;
    rep(i,n){
        ll xi = x.at(i);
        ll yi = y.at(i);
        double distance = sqrt(xi*xi + yi*yi);
        if(distance<=d) res++;
    }
    cout << res << endl;
}