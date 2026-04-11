#include <iostream>
using namespace std;

const int MAXN = 10000000;
int spf[MAXN + 1];

void fillSieve() {
    for (int i = 1; i <= MAXN; i++) {
        spf[i] = i;
    }

    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

int countPrimes(int n) {
    int count = 0;
    
    while (n > 1) {
        int p = spf[n];
        count++;
        while (n % p == 0) {
            n /= p;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fillSieve();

    int tests;
    cin >> tests;

    while (tests--) {
        int n;
        cin >> n;

        int k = countPrimes(n);
        long long result = (1LL << k);

        cout << result << '\n';
    }

    return 0;
}