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
    ll in;
    cin >> in;
    ll n = 1 << in;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    ll max1=0, num1=0;
    ll max2=0, num2=0;
    rep(i,n/2){
        if(max1 < a.at(i)){
            max1 = a.at(i);
            num1 = i+1;
        }
    }
    rep(i,n/2){
        if(max2 < a.at(i+n/2)){
            max2 = a.at(i+n/2);
            num2 = i+n/2+1;
        }
    }
    ll res = max1 < max2 ? num1 : num2;
    cout << res << endl;
}
