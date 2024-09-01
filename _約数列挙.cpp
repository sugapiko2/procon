#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)
using vi = vector<int64_t>;
using vvi = vector<vi>;
using ll = int64_t;
using P = pair<ll, ll>;
ll INF = 1000000007;

// 計算量: O(sqrt(n))
// https://ei1333.github.io/luzhiled/snippets/math/divisor.html
// nの約数を全て持った配列にして返す
vi divisor(ll n) {
    vi ret;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(begin(ret), end(ret));
    return (ret);
}

// (利用例)
// 1000の約数を配列に詰めて返す
// [1, 2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 125, 200, 250, 500, 1000]
int main() {
    vi res = divisor(1000);
    for (ll i : res) {
        cout << i << endl;
    }
}
