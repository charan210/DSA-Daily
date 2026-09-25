class Solution {
public:

    int findFirst(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid;
                high = mid - 1;   // search left
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int findLast(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                ans = mid;
                low = mid + 1;    // search right
            }
            else if(nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = findFirst(nums, target);

        if(first == -1)
            return {-1, -1};

        int last = findLast(nums, target);

        return {first, last};
    }
};