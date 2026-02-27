#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true; // duplicate found
            }
            seen.insert(num);
        }
        return false; // no duplicates
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << (sol.containsDuplicate(nums) ? "true" : "false") << endl;
    return 0;
}
