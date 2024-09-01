#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
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
using TP3 = tuple<ll, ll, ll>;
ll INF = 1000000007;
ll INF2 = 998244353;
ll INF3 = INT64_MAX;  // 9223 37203 68547 75807
long double pi = 2 * acos(0);

int main() {
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    string s;
    cin >> s;
    cout << s+s << endl;
}