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
    ll n,x0,y0,xh,yh;
    cin >> n >> x0 >> y0 >> xh >> yh;
    double pi = 2*acos(0);
    double coss = cos(2*pi/n);
    double sins = sin(2*pi/n);
    double x = ((x0 + xh) + (x0-xh)*coss - (y0-yh)*sins)/2;
    double y = ((y0 + yh) + (x0-xh)*sins + (y0-yh)*coss)/2;
    cout << setprecision(10) << x << " " << y << endl;
}