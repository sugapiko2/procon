#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep_(i, m_, n_, m, n, ...) for (int64_t i = m; i < n; i++)
#define rep(i, ...) rep_(i, __VA_ARGS__, __VA_ARGS__, 0, __VA_ARGS__)
#define rep_reverse_(i, m_, n_, m, n, ...) for (int64_t i = n - 1; i >= m; i--)
#define rep_reverse(i, ...) \
    rep_reverse_(i, __VA_ARGS__, __VA_ARGS__, 0, __VA_ARGS__)
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
    string s;
    cin >> s;
    ll n = s.size();
    vi vk(n);
    ll num = 0;
    rep(i, n)
    {
        if (s.at(i) == 'R')
        {
            num++;
            continue;
        }
        if (num % 2 == 0)
        {
            vk.at(i) += num / 2;
            vk.at(i - 1) += num / 2;
        }
        else
        {
            vk.at(i) += num / 2;
            vk.at(i - 1) += num / 2 + 1;
        }
        num = 0;
    }
    num = 0;
    rep_reverse(i, n)
    {
        if (s.at(i) == 'L')
        {
            num++;
            continue;
        }
        if (num % 2 == 0)
        {
            vk.at(i) += num / 2;
            vk.at(i + 1) += num / 2;
        }
        else
        {
            vk.at(i) += num / 2;
            vk.at(i + 1) += num / 2 + 1;
        }
        num = 0;
    }
    rep(i, n) cout << vk.at(i) << " ";
    cout << endl;
}