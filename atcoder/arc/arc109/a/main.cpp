#include <bits/stdc++.h>
#include <atcoder/all>
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
    ll a,b,x,y;
    cin >> a >> b >> x >> y;
    ll res = 0;
    if(b>a){
        res = min(y*(b-a)+x, 2*x*(b-a)+x);
    }else if(a==b){
        res = x;
    }else{
        res = min(y*(a-b-1)+x, 2*x*(a-b)-x);
    }
    cout << res << endl;
}