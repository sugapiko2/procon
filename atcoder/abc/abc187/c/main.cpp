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
    vector<string> s(n);
    rep(i,n) cin >> s.at(i);
    rep(i,n){
        if(s.at(i).at(0) == '!'){
            s.at(i).erase(s.at(i).begin());
            s.at(i).push_back('!');
        }
    }
    sort(s.begin(), s.end());
    string res = "";
    rep(i,n-1){
        if(s.at(i) + "!" == s.at(i+1)){
            res = s.at(i);
            break;
        }
    }
    if(res == "") res = "satisfiable";
    cout << res << endl;
}
