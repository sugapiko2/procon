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
    ll h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<string> s(h), s2(w);
    rep(i,h) cin >> s.at(i);
    ll res = 0;
    for(ll i=y-1; i<=w-1; i++){
        if(s.at(x-1).at(i)!='#') res++;
        else break;
    }
    for(ll i=y-1; i>=0; i--){
        if(s.at(x-1).at(i)!='#') res++;
        else break;
    }
    for(ll i=x-1; i<=h-1; i++){
        if(s.at(i).at(y-1)!='#') res++;
        else break;
    }
    for(ll i=x-1; i>=0; i--){
        if(s.at(i).at(y-1)!='#') res++;
        else break;
    }
    if(s.at(x-1).at(y-1) != '#') res -= 3;
    cout << res << endl;
}