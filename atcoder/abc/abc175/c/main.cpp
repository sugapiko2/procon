#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int64_t i = 0; i < int64_t(n); i++)
#define rep3(i, m, n) for (int64_t i = int64_t(m); i < int64_t(n); i++)
#define rep_reverse(i, n) for (int64_t i = int64_t(n) - 1; i >= 0; i--)
#define rep3_reverse(i, m, n) \
    for (int64_t i = int64_t(n) - 1; i >= int64_t(m); i--)
using ll = int64_t;
using vi = vector<ll>;
using vvi = vector<vi>;
using P = pair<ll, ll>;
ll INF = 1000000007;

int main()
{
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    ll x, k, d;
    cin >> x >> k >> d;
    ll res = 0;
    if (double(abs(x)) / double(k) >= d)
    {
        res = abs(x) - d * k;
    }
    else
    {
        ll res1, res2;
        if ((abs(x) / d) % 2 == k % 2)
        {
            res1 = abs(x) % d;
            res2 = abs(abs(x) % d - 2 * d);
        }
        else
        {
            res1 = abs(x) % d + d;
            res2 = abs(abs(x) % d - d);
        }
        res = min(res1, res2);
    }
    cout << res << endl;
}
