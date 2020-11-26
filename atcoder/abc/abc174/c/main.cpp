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
    ll k;
    cin >> k;
    ll num = 7;
    ll counter = 1;
    ll res = -1;
    rep(i,k+7){
        if(num%k==0){
            res = counter;
            break;
        }else{
            num = (num*10+7)%k;
            counter++;
        }
    }
    cout << res << endl;
}