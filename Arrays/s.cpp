#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0]; // Start with the first string as the prefix
    for (int i = 1; i < strs.size(); i++) {
        // Compare prefix with each string
        while (strs[i].find(prefix) != 0) {
            // Shorten prefix until it matches the beginning of strs[i]
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}

int main() {
    vector<string> strs1 = {"flower","flow","flight"};
    cout << "Output: " << longestCommonPrefix(strs1) << endl; // fl

    vector<string> strs2 = {"dog","racecar","car"};
    cout << "Output: " << longestCommonPrefix(strs2) << endl; // ""

    return 0;
}
