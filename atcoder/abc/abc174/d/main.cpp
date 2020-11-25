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
    string c;
    cin >> n >> c;
    string idealc = "";
    ll rcount = 0;
    rep(i,n) if(c.at(i)=='R') rcount++;
    rep(i,rcount) idealc.push_back('R');
    rep(i,c.size()-rcount) idealc.push_back('W');
    ll res = 0;
    rep(i,n) if(idealc.at(i)!=c.at(i)) res++;
    res /= 2;
    cout << res << endl;
}