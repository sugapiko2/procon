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
    if(n%2==1) return 0;
    vector<string> sl;
    rep(i,n/2) sl.push_back("(");
    rep(i,n/2) sl.push_back(")");
    ll res = 0;
    do {
        ll ctr = 0;
        bool ok = true;
        rep(i,sl.size()) {
            if(sl.at(i) == "(") ctr++;
            if(sl.at(i) == ")") ctr--;
            if(ctr < 0) ok = false;
        }
        if(ok){
            rep(i,sl.size()) cout << sl.at(i);
            cout << endl;
        }
    } while (next_permutation(sl.begin(), sl.end()));
}
