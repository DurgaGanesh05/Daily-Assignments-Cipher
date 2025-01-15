#include <iostream>
using namespace std;

bool isValid(string s) {
    string opened;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            opened += c;
        } else {
            if (opened.empty()) return false;
            char last = opened.back();
            if ((c == ')' && last == '(') ||
                (c == ']' && last == '[') ||
                (c == '}' && last == '{')) {
                opened.pop_back();
            } else {
                return false;
            }
        }
    }
    return opened.empty();
}

int main() {
    string s;
    cin >> s;

    if (isValid(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
