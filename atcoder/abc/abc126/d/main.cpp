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
    ll n;
    cin >> n;
    vi u(n - 1), v(n - 1), w(n - 1);
    rep(i, n - 1) cin >> u.at(i) >> v.at(i) >> w.at(i);
    vector<vector<P>> list(n + 1);
    rep(i, n - 1) list.at(u.at(i)).push_back({v.at(i), w.at(i)});
    rep(i, n - 1) list.at(v.at(i)).push_back({u.at(i), w.at(i)});
    vi res(n + 1, -1);
    res.at(1) = 0;
    queue<ll> q;
    q.push(1);
    while (!q.empty())
    {
        ll f = q.front();
        q.pop();
        for (P next : list.at(f))
        {
            if (res.at(next.first) != -1)
                continue;
            if ((res.at(f) + next.second) % 2 == 0)
            {
                res.at(next.first) = 0;
            }
            else
            {
                res.at(next.first) = 1;
            }
            q.push(next.first);
        }
    }
    rep3(i, 1, n + 1) cout << res.at(i) << endl;
}
