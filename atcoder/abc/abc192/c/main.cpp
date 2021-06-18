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
    ll n,k;
    cin >> n >> k;
    ll g1, g2;
    string a = "001";
    rep(i,k){
        string s = to_string(n);
        sort(s.begin(), s.end());
        g2 = stoll(s);
        reverse(s.begin(), s.end());
        g1 = stoll(s);
        n = g1 - g2;
    }
    cout << n << endl;
}
