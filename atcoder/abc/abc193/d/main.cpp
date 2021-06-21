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
    ll k;
    string s,t;
    cin >> k >> s >> t;
    vi nums(10);
    vi snums(10);
    vi tnums(10);
    rep(i,4){
        nums.at(s.at(i)-'0')++;
        nums.at(t.at(i)-'0')++;
        snums.at(s.at(i)-'0')++;
        tnums.at(t.at(i)-'0')++;
    }
    ll win = 0;
    ll test = 0;
    for(ll i=1; i<=9; i++){
        for(ll j=1; j<=9; j++){
            if(i==j && k-nums.at(i)<2) continue;
            if(i!=j && k-nums.at(i)<1) continue;
            if(i!=j && k-nums.at(j)<1) continue;
            ll sp = 0, tp=0;
            for(ll m=1; m<=9; m++){
                ll pow = 1;
                rep(l,snums.at(m)+(i==m)) pow *= 10;
                sp += m*pow;
            }
            for(ll m=1; m<=9; m++){
                ll pow = 1;
                rep(l,tnums.at(m)+(j==m)) pow *= 10;
                tp += m*pow;
            }
            if(sp>tp){
                if(i!=j) win += (k-(nums.at(i)))*(k-(nums.at(j)));
                if(i==j) win += (k-(nums.at(i)))*(k-(nums.at(j)+1));
                // cout << "(" << i << "," << j << ")" << "sp:" << sp << " tp:" << tp << endl;
            }
            test++;
        }
    }
    ll u = ((9*k-8)*(9*k-9));
    // cout << win << endl;
    // cout << u << endl;
    double res = double(win) / double(u);
    cout << setprecision(10) << res << endl;
}
