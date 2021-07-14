#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep3(i, m, n) for (int64_t i = m; i < n; i++)
#define rep(i, n) for (int64_t i = 0; i < n; i++)
using ll = int64_t;
using vi = vector<ll>;
using vvi = vector<vi>;
using P = pair<ll, ll>;
ll INF = 1000000007;
// ll INF = 9223372036854775807;
// ll INF = 998244353;

int main()
{
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    ll n;
    vi a(n);
    rep(i, n) cin >> a.at(i);
    // 200で割ったあまりが同じ組み合わせを探す
    vi nums(201, 0);
    rep(i, n) nums.at(a.at(i) % 200);
    ll res = 0;
    rep(i, 201)
    {
        ll num = nums.at(i);
        res += (num * (num - 1)) / 2;
    }
    cout << res << endl;
}