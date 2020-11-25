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
    ll r1, r2, c1, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    ll res = -1;
    if(r1==r2 && c1==c2) res = 0;
    if(
        c2-r2 == c1-r1 ||
        c2+r2 == c1+r1 ||
        abs(c2-c1) + abs(r2-r1) <= 3
    ) if(res == -1) res = 1;
    if(
        ((c1+r1)%2)==((c2+r2)%2) ||
        (c1+r1-3 <= c2+r2 && c1+r1+3 >= c2+r2) ||
        (c1-r1-3 <= c2-r2 && c1-r1+3 >= c2-r2) ||
        abs(c2-c1) + abs(r2-r1) <= 6
    ) if(res == -1) res = 2;
    if(res == -1) res = 3;
    cout << res << endl;
}