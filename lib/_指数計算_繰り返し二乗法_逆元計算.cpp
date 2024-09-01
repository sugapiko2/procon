// n の k 乗を mod で割った余りを計算
long long power_mod(long long n, long long k, long long mod) {
    long long result = 1;
    // k を右シフトしつつ n を 2 乗していく
    while (k > 0) {
        // k の最下ビットが 1 なら、今の n を答えに掛ける
        if ((k & 1) == 1) result = (result * n) % mod;
        n = n * n % mod;
        k >>= 1;
    }
    return result;
}

// mod pにおけるn(=5)の逆元（フェルマーの小定理から、p-2乗が逆元）
long long n = 5;
long long p = 998244353;
long long inv = power_mod(n, p - 2, p);
