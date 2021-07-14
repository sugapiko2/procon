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

struct vSum
{
    vi indexes;
    vi v;
    ll sum;
    vSum(vi vec, vi idx)
    {
        ll tsum = 0LL;
        rep(i, vec.size()) tsum += vec.at(i);
        rep(i, idx.size()) idx.at(i)++;
        indexes = idx;
        v = vec;
        sum = tsum % 200LL;
    }
};

int main()
{
    // fasten cin
    cin.tie(0);
    ios::sync_with_stdio(false);
    // implement
    ll n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a.at(i);
    // Anのうち、200で割ったあまりが同じになる組み合わせを探せば良い
    // 201パターンを試せば必ずその中に同じのはいるはず
    // 全探索 または 200通り (2^10以内にはかならずある)
    ll upper = n < 10 ? n : 10;
    vector<vSum> vsums;
    rep(i, 1LL << upper)
    {
        vi vec;
        vi indexes;
        rep(j, upper)
        {
            if (i & (1LL << j))
            {
                indexes.push_back(j);
                vec.push_back(a.at(j));
            }
        }
        vSum vs = vSum(vec, indexes);
        vsums.push_back(vs);
    }
    sort(vsums.begin(), vsums.end(),
         [](vSum v1, vSum v2)
         { return v1.sum < v2.sum; });
    // rep(i, vsums.size()) { cout << vsums.at(i).sum << endl; }
    string res = "No";
    vi indexes1, indexes2;
    rep(i, vsums.size() - 1)
    {
        if (vsums.at(i).sum == vsums.at(i + 1).sum)
        {
            res = "Yes";
            indexes1 = vsums.at(i).indexes;
            indexes2 = vsums.at(i + 1).indexes;
        }
    }
    cout << res << endl;
    if (res == "Yes")
    {
        cout << indexes1.size() << " ";
        rep(i, indexes1.size()) cout << indexes1.at(i) << " ";
        cout << endl;
        cout << indexes2.size() << " ";
        rep(i, indexes2.size()) cout << indexes2.at(i) << " ";
        cout << endl;
    }
}