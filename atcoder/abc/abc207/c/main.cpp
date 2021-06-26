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
    vi t(n), l(n), r(n);
    rep(i,n) cin >> t.at(i) >> l.at(i) >> r.at(i);
    ll share = 0;
    ll count = 0;
    rep(i,n-1){
        for(ll j=i+1; j<n; j++){
            ll share1=0,share2=0;
            if(t.at(i)==1||t.at(i)==3){
                if(t.at(j)==1||t.at(j)==2){
                    if(r.at(i)>=l.at(j)) share1++;
                }else{
                    if(r.at(i)>l.at(j)) share1++;
                }
            }else{
                if(t.at(j)==1||t.at(j)==2){
                    if(r.at(i)>l.at(j)) share1++;
                }else{
                    if(r.at(i)>l.at(j)) share1++;
                }
            }
            if(t.at(i)==1||t.at(i)==2){
                if(t.at(j)==1||t.at(j)==3){
                    if(r.at(j)>=l.at(i)) share2++;
                }else{
                    if(r.at(j)>l.at(i)) share2++;
                }
            }else{
                if(t.at(j)==1||t.at(j)==3){
                    if(r.at(j)>l.at(i)) share2++;
                }else{
                    if(r.at(j)>l.at(i)) share2++;
                }
            }
            if(share1&&share2)share++;
        }
    }
    cout << share << endl;
}