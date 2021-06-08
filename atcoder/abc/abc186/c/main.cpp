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
    ll res = 0;
    for(ll i=1; i<=n; i++){
        bool has7 = false;
        string stri = to_string(i);
        rep(j,stri.size()) if(stri.at(j) == '7') has7 = true;
        string str8 = "";
        ll num = i;
        ll eight = 1;
        rep(j,10){
            str8 = to_string((num%(eight*8))/eight) + str8;
            eight *= 8;
        }
        rep(j,str8.size()) if(str8.at(j) == '7') has7 = true;
        if(has7) res++;
    }
    cout << n - res << endl;
}
