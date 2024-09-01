#include <iostream>
#include <vector>
using namespace std;

int main() {
    // my_min関数をラムダ式で定義
    auto my_min = [](int a, int b) {
        if (a < b) {
            return a;
        } else {
            return b;
        }
    };

    cout << my_min(5, 10) << endl;

    // 最大値を保持する変数
    int max_num = 0;

    // 今まで受け取った値の中から最も大きな値を返す関数
    // [&]と書くことでラムダ式の外の変数を利用できます。
    auto update_max = [&](int n) {
        if (max_num < n) {
            max_num = n;
        }
        return max_num;
    };

    cout << update_max(5) << endl;
    cout << update_max(2) << endl;
    cout << update_max(10) << endl;
    cout << update_max(4) << endl;

    // 再帰関数の定義
    // function<int(int)> sum = [&](int n) {
    //     if (n == 0) {
    //         return 0;
    //     }
    //     int s = sum(n - 1);
    //     return s + n;
    // };

    // cout << sum(3) << endl;
}
