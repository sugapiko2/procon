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
    ll n,x;
    cin >> n >> x;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    ll sum = 0;
    rep(i,n){
        if(i%2!=0) sum += a.at(i)-1; // 偶数
        else sum += a.at(i);
    }
    string res = "No";
    if(x>=sum) res = "Yes";
    cout << res << endl;
}