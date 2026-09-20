class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[n-1];
        int count=0;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>(sum/(n-i-1))) count++;
            sum+=nums[i];
        }
        return count;
    }
};