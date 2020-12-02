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
    string s;
    cin >> n >> s;
    ll asum = 0;
    ll tsum = 0;
    ll csum = 0;
    ll gsum = 0;
    vi a(n+1),t(n+1),c(n+1),g(n+1);
    rep(i,n){
        if(s.at(i)=='A') asum++;
        if(s.at(i)=='T') tsum++;
        if(s.at(i)=='C') csum++;
        if(s.at(i)=='G') gsum++;
        a.at(i+1) = asum;
        t.at(i+1) = tsum;
        c.at(i+1) = csum;
        g.at(i+1) = gsum;
    }
    ll res = 0;
    for(ll i=1;i<n;i++){
        for(ll j=i+1;j<n+1;j++){
            if((a.at(j)-a.at(i-1)==t.at(j)-t.at(i-1)) &&
                c.at(j)-c.at(i-1)==g.at(j)-g.at(i-1)) res++;
        }
    }
    cout << res << endl;
}