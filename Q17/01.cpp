#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (size_t i = 1; i < strs.size(); ++i) {
        for (size_t j = 0; j < prefix.length(); ++j) {
            if (j >= strs[i].length() || strs[i][j] != prefix[j]) {
                prefix = prefix.substr(0, j);
                break;
            }
        }
        if (prefix.empty()) return "";
    }
    return prefix;
}



int main() {
    vector<string> strs = {"dog", "asd", "disddre"};
    cout << longestCommonPrefix(strs) << endl;

    return 0;
}
