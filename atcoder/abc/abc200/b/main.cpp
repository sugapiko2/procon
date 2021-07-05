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
    ll n,q;
    string s;
    cin >> n >> s >> q;
    vi t(q), a(q), b(q);
    rep(i,q) cin >> t.at(i) >> a.at(i) >> b.at(i);
    rep(i,q){
        if(t.at(i)==1){
            char tmp = s.at(a.at(i)-1);
            s.at(a.at(i)-1) = s.at(b.at(i)-1);
            s.at(b.at(i)-1) = tmp;
        }
        if(t.at(i)==2){
            string s1 = s.substr(0,n);
            string s2 = s.substr(n+1,s.size()-2*n);
            string s3 = s.substr(s.size()-n,n);
            s = s3 + s2 + s1;
        }
    }
    cout << s << endl;
}