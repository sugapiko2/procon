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
    vi x(n), y(n);
    rep(i,n) cin >> x.at(i) >> y.at(i);
    ll m;
    cin >> m;
    vector<P> op;
    ll tmpop, tmpnum;
    rep(i,m) {
        cin >> tmpop;
        if(tmpop == 3 || tmpop == 4) {
            cin >> tmpnum;
            op.push_back(make_pair(tmpop, tmpnum));
        }else{
            op.push_back(make_pair(tmpop, 0));
        }
    }
    ll q;
    cin >> q;
    vi a(q), b(q);
    rep(i,q) cin >> a.at(i) >> b.at(i);
    vi r1(m+1), r2(m+1);
    r1.at(0) = 1;
    r2.at(0) = 1;
    cout << op.at(0).first << endl;
    rep(i,m){
        if(op.at(i).first == 1){
            r1.at(i+1) = r2.at(i);
            r2.at(i+1) = -r1.at(i);
        }
        if(op.at(i).first == 2){
            r1.at(i+1) = -r2.at(i);
            r2.at(i+1) = r1.at(i);
        }
        if(op.at(i).first == 3){
            r1.at(i+1) = 2*op.at(i).second - r1.at(i);
            r2.at(i+1) = r2.at(i);
        }
        if(op.at(i).first == 4){
            r1.at(i+1) = r1.at(i);
            r1.at(i+1) = 2*op.at(i).second - r2.at(i);
        }
    }
    x.at(0);
    rep(i,q){
        ll resx = r1.at(a.at(i)) * x.at(b.at(i)-1);
        ll resy = r2.at(a.at(i)) * y.at(b.at(i)-1);
        cout << resx << " " << resy << endl;
    }
}
