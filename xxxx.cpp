#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int multiplier = 1;
        int roundNumbers[5];
        int count = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers[count++] = digit * multiplier;
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << count << endl;
        for (int i = 0; i < count; i++) {
            cout << roundNumbers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

