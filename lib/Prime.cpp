#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int64_t i = 0; i < (int64_t)(n); i++)
using vi = vector<int64_t>;
using vvi = vector<vi>;
using ll = int64_t;
using P = pair<ll, ll>;
const ll INF = 1000000007;

// Sieve of Eratosthenes
// https://youtu.be/UTVg7wzMWQc?t=2774
// 素因数分解
// 素数列挙
struct Sieve {
    ll n;
    vi f;
    vi primes;
    // constructor
    Sieve(ll n = 1) : n(n), f(n + 1, 0) {
        f.at(0) = -1;
        f.at(1) = -1;
        for (ll i = 2; i <= n; ++i) {
            if (f.at(i) != 0) continue;
            primes.push_back(i);
            f.at(i) = i;
            for (ll j = i * i; j <= n; j += i) {
                if (f.at(j) == 0) f.at(j) = i;
            }
        }
    }
    // xが素数かを判定
    bool isPrime(ll x) { return f.at(x) == x; }
    // xを素因数分解する関数(分解後の値を昇順の配列にして返す)
    // (100) => ([2,2,5,5]);
    vi primeFactorizedList(ll x) {
        vi res;
        while (x != 1) {
            res.push_back(f.at(x));
            x /= f.at(x);
        }
        return res;
    }
    // 素因数分解したときの各因数の個数をsecondに持つpairにする
    vector<P> primeFactorizedPair(ll x) {
        vi fl = primeFactorizedList(x);
        if (fl.size() == 0) return {};
        vector<P> res(1, P(fl.at(0), 0));
        for (ll p : fl) {
            if (res.back().first == p) {
                res.back().second++;
            } else {
                res.emplace_back(p, 1);
            }
        }
        return res;
    }
};

// (利用例)
int main() {
    // 1. 100を素因数分解
    Sieve si = Sieve(100000);
    for (ll i : si.primeFactorizedList(100)) {
        cout << i << endl;
        ;
    }
    // 2. 101が素因数分解か判定
    if (si.isPrime(101)) {
        cout << "101 is prime" << endl;
    };
    // 3. 1200の素因数のPairを取得
    for (P p : si.primeFactorizedPair(100)) {
        cout << p.first << "^" << p.second << endl;
    }
}
