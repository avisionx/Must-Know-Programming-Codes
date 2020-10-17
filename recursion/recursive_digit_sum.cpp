#include <bits/stdc++.h>
using namespace std;

int digit_sum_finder(string s) {
    int rem = 0;
    for (int i = 0; i < s.length(); ++i) {
        rem = (rem + (s[i] - '0')) % 9;
    }
    return rem % 9;
}
int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;
    k = k % 9;

    if (k == 0) {
        cout << "9";
    }
    else {
        int digit_sum = digit_sum_finder(s);
        digit_sum = (digit_sum * k) % 9;

        if (digit_sum != 0) {
            cout << digit_sum;
        }
        else {
            cout << "9";
        }
    }
    return 0;
}