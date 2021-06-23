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
    ll n;
    cin >> n;
    vi nums;
    ll tmpn = n;
    while(tmpn!=0){
        nums.push_back(tmpn%1000);
        tmpn/=1000;
    }
    ll c = 1;
    rep(i,nums.size()-1) c *= 1000;
    ll res = 0;
    if(n>=1000) res += (n-c) * (nums.size()-1) + 1;
    rep(i,nums.size()-2){
        ll comma = to_string(c-1).size()/3 - 1;
        res += ((c*999)/1000) * comma + 1;
        c/=1000;
    }
    cout << res << endl;
}