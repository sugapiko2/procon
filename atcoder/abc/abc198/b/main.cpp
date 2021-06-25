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
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    bool is0 = true;
    string str = "";
    rep(i,n.size()){
        if(!is0) {
            str.push_back(n.at(i));
            continue;
        }
        if(n.at(i) != '0'){
            str.push_back(n.at(i));
            is0 = false;
        }
    }
    string res = "Yes";
    rep(i,str.size()){
        if(str.at(i) != str.at(str.size()-1-i)) res = "No";
    }
    cout << res << endl;
}