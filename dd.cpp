#include <bits/stdc++.h>
using namespace std;
string fixExpression(string s) {
    char a = s[0], op = s[1], b = s[2];
    int num1 = a - '0';
    int num2 = b - '0';
    if ((op == '<' && num1 < num2) || (op == '>' && num1 > num2) || (op == '=' && num1 == num2)) {
        return s;
    }
    if (num1 < num2) {
        return string(1, a) + "<" + string(1, b);
    } else if (num1 > num2) {
        return string(1, a) + ">" + string(1, b);
    } else {
        return string(1, a) + "=" + string(1, b);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << fixExpression(s) << endl;
    }
    return 0;
}

