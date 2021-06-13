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
    ll n,q;
    cin >> n >> q;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    vi k(q);
    rep(i,q) cin >> k.at(i);

    set<ll> nums;
    rep(i,n) nums.insert(a.at(i));

    rep(i,q){
        {
            ll ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
            ll ok = (ll)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
            /* ok と ng のどちらが大きいかわからないことを考慮 */
            while (abs(ok - ng) > 1) {
                ll mid = (ok + ng) / 2;
                if (a[mid] > k.at(i)) ok = mid;
                else ng = mid;
            }
            ll tres = ok;
            ll tk = k.at(i);
            rep(j,ok){
                if(j!=0 && nums.count(tk)) ok++;
                tk++;
            }
            cout << tk << endl;
        }

        // cout << res << endl;
    }
}
