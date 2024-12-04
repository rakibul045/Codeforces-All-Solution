#include <bits/stdc++.h>
using namespace std;
int main()
 {
    string input;
    getline(cin, input);
    if (input == "{}")
    {
        cout << 0 << endl;
        return 0;
    }
    input = input.substr(1, input.size() - 2);
    set<char> distinct_letters;
    for (char c : input)
    {
        if (isalpha(c))
        {
            distinct_letters.insert(c);
        }
    }
    cout << distinct_letters.size() << endl;

    return 0;
}
