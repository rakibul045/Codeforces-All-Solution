#include <iostream>
#include <vector>
#include <cmath> // For abs function

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of notes in the melody
        cin >> n;

        vector<int> notes(n);
        for (int i = 0; i < n; i++) {
            cin >> notes[i];
        }

        bool is_perfect = true;

        // Check intervals between consecutive notes
        for (int i = 1; i < n; i++) {
            int interval = abs(notes[i] - notes[i - 1]);
            if (interval != 5 && interval != 7) {
                is_perfect = false; // Melody is not perfect
                break;
            }
        }

        // Print result for the current melody
        cout << (is_perfect ? "YES" : "NO") << endl;
    }

    return 0;
}

