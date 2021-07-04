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
    ll p;
    cin >> p;
    vi money;
    ll sum = 1;
    for(ll i=1; i<=10; i++){
        sum *= i;
        money.push_back(sum);
    }
    ll res = 0;
    for(ll i=9; i>= 0; i--){
        ll tres = p / money.at(i);
        if(tres<=100){
            p %= money.at(i);
            res += tres;
        }else{
            p -= 100 * money.at(i);
            res += 100;
        }
    }
    cout << res << endl;
}