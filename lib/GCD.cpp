#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)
using vi = vector<int64_t>;
using vvi = vector<vi>;
using ll = int64_t;
using P = pair<ll,ll>;
ll INF = 1000000007;

ll gcd(ll a, ll b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

// (利用例)
// 1000の約数を配列に詰めて返す
// [1, 2, 4, 5, 8, 10, 20, 25, 40, 50, 100, 125, 200, 250, 500, 1000]
int main() {
    ll res = gcd(10,6);
    cout << res << endl;
}

// 最大公倍数 = a * b / gcd(a,b)