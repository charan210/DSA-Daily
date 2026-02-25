#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid; // target found
            } else if (nums[mid] < target) {
                left = mid + 1; // search right half
            } else {
                right = mid - 1; // search left half
            }
        }
        
        // If not found, 'left' will be the correct insert position
        return left;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 6};
    
    cout << sol.searchInsert(nums, 5) << endl; // Output: 2
    cout << sol.searchInsert(nums, 2) << endl; // Output: 1
    cout << sol.searchInsert(nums, 7) << endl; // Output: 4
    cout << sol.searchInsert(nums, 0) << endl; // Output: 0
    
    return 0;
}
