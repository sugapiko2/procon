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
    vi t(n);
    rep(i,n) cin >> t.at(i);
    ll sum = 0;
    rep(i,n) sum += t.at(i);
    ll num = sum%2==0 ? sum/2 : sum/2+1;
    vvi dp = vector<vi>(n, vector<ll>(100010));
    dp.at(0).at(t.at(0)) = 1;
    for(ll i=1; i<n; i++){
        rep(j, 100009){
            if(dp.at(i-1).at(j)) dp.at(i).at(j) = 1;
            if(j-t.at(i)>=0){
                if(dp.at(i-1).at(j-t.at(i))) dp.at(i).at(j) = 1;
            }
        }
    }
    ll res = 0;
    rep(i,100009){
        if(dp.at(n-1).at(num)){
            res = num;
            break;
        }
        num++;
    }
    cout << res << endl;
}
