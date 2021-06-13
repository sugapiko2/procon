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
    ll a, b, c;
    cin >> a >> b >> c;
    if(a==b){
        cout << "=" << endl;
        return 0;
    }
    string res;
    if(c%2==0){
        if(abs(a)==abs(b)){
            res = "=";
        }else{
            res = abs(a) > abs(b) ? ">" : "<";
        }
    }else{
        if(a*b == 0){
            if(a==0) res = b > 0 ? "<" : ">";
            if(b==0) res = a > 0 ? ">" : "<";
        }else{
            res = a > b ? ">" : "<";
        }
    }
    cout << res << endl;
}
