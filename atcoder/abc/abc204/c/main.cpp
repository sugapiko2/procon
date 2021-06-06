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

vi a(2100), b(2100);
vvi ways(2100);
vvi reslist = vector<vi>(2100, vector<ll>(2100));
void search(ll start, ll current) {
    if(reslist.at(start).at(current) == 0){
        // reslist.push_back(res);
        reslist.at(start).at(current)++;
        for(ll way: ways.at(current)) search(start, way);
    }
}

int main() {
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    ll n, m;
    cin >> n >> m;
    rep(i,m) cin >> a.at(i) >> b.at(i);
    rep(i,m) ways.at(a.at(i)).push_back(a.at(i));
    rep(i,m) ways.at(a.at(i)).push_back(b.at(i));
    rep(i,n) search(i+1, i+1);
    ll res = 0;
    for(vi resl: reslist){
        for(ll j: resl) res += j;
    }
    cout << res << endl;
}
