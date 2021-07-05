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
    string s;
    cin >> s;
    vi nums(10);
    rep(i,10){
        if(s.at(i)=='o') nums.at(i)++;
    }
    ll res = 0;
    rep(j,10000){
        string str = to_string(10000LL+j);
        vector<bool> tnums(10);
        bool tres = true;
        rep(i,4){
            ll num = str.at(i+1) - '0';
            if(s.at(num)=='x'){
                tres = false;
                break;
            }
            tnums.at(num) = true;
        }
        if(!tres) continue;
        rep(i,10){
            if(s.at(i)=='o' && !tnums.at(i)){
                tres = false;
                break;
            }
        }
        if(!tres) continue;
        res++;
    }
    cout << res << endl;
}