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
    ll n,m,q;
    cin >> n >> m >> q;
    vi w(n), v(n);
    rep(i,n) cin >> w.at(i) >> v.at(i);
    vector<P> vp(n);
    rep(i,n) vp.at(i) = make_pair(v.at(i), w.at(i));
    sort(vp.begin(), vp.end(), greater<>());
    vi x(m);
    rep(i,m) cin >> x.at(i);
    vi ql(q),qr(q);
    rep(i,q) cin >> ql.at(i) >> qr.at(i);
    rep(i,q){
        vi box = x;
        vector<P> cvp = vp;
        auto l = ql.at(i) - 1;
        auto r = qr.at(i);
        box.erase(box.begin()+l, box.begin()+r);
        sort(box.begin(), box.end());
        ll res = 0;
        rep(j,box.size()){
            rep(k,cvp.size()){
                if(cvp.at(k).second<=box.at(j)){
                    res += cvp.at(k).first;
                    cvp.erase(cvp.begin()+k);
                    break;
                }
            }
        }
        cout << res << endl;
    }
}