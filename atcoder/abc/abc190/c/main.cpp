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
    vi a(m), b(m);
    rep(i,m) cin >> a.at(i) >> b.at(i);
    ll k;
    cin >> k;
    vi c(k), d(k);
    rep(i,k) cin >> c.at(i) >> d.at(i);
    ll res = 0;
    rep(x,1<<k){
        vi nums(n);
        rep(j,k){
            if((x>>j)%2){
                nums.at(c.at(j)-1) += 1;
            }else{
                nums.at(d.at(j)-1) += 1;
            }
        }
        ll tres = 0;
        rep(j,m){
            if(nums.at(a.at(j)-1) && nums.at(b.at(j)-1)) tres++;
        }
        res = max(res, tres);
    }
    cout << res << endl;
}
