class Solution {
public:
    void rotate(vector<vector<int>>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(nums[i][j],nums[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(nums[i].begin(),nums[i].end());
        }
    }
};