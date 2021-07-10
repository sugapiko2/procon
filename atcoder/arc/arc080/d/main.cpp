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
    ll h,w,n;
    cin >> h >> w >> n;
    vi a(n);
    rep(i,n) cin >> a.at(i);
    vvi res(w, vi(h));
    ll x = 0;
    ll to = 1;
    ll y = 0;
    rep(i,n){
        rep(j,a.at(i)){
            res.at(x).at(y) = i+1;
            if(x==0 && to==-1){
                to = 1, y++;
            }else if(x==w-1 && to==1){
                to = -1, y++;
            }else{
                x += to;
            }
        }
    }
    rep(i,h){
        rep(j,w){
            cout << res.at(j).at(i) << " ";
        }
        cout << endl;
    }
}