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
    double a,b,w;
    cin >> a >> b >> w;
    w *= 1000;
    vi ress;
    for(ll i=1; i<=1001010; i++){
        if(i*a<=w && w<=i*b) ress.push_back(i);
    }
    if(ress.size()>0){
        cout << ress.at(0) << " " << ress.at(ress.size()-1) << endl;
    }else{
        cout << "UNSATISFIABLE" << endl;
    }
}