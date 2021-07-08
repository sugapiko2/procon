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
    ll s;
    cin >> s;
    vi f(2020);
    f.at(0) = 0;
    f.at(1) = 0;
    f.at(2) = 0;
    f.at(3) = 1;
    f.at(4) = 1;
    f.at(5) = 1;
    for(ll i=6; i<=s; i++){
        ll temp = 1;
        for(ll j = 3; j<=i-3; j++){
            temp += f.at(j);
        }
        f.at(i) = temp %= INF;
    }
    cout << f.at(s) << endl;
}