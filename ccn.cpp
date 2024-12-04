#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    const int MAX = 1000000;
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    // Sieve of Eratosthenes
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Store all primes
    vector<long long> primes;
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            primes.push_back(static_cast<long long>(i));
        }
    }

    // Input handling
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        long long sq = sqrt(x);

        // Check if x is a T-prime
        if (sq * sq == x && isPrime[sq]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
