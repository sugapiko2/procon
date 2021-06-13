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
    vector<string> s(n);
    rep(i,n) cin >> s.at(i);
    vi yt(n+1), yf(n+1);
    yt.at(0) = 1;
    yf.at(0) = 1;
    rep(i,n){
        if(s.at(i) == "AND") {
            yt.at(i+1) = yt.at(i);
            yf.at(i+1) = yt.at(i) + yf.at(i)*2;
        } else {
            yt.at(i+1) = yt.at(i)*2 + yf.at(i);
            yf.at(i+1) = yf.at(i);
        }
    }
    cout << yt.at(n) << endl;
}
