class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
         backtracking(nums,ans,0);
         return ans;

    }
    void backtracking(vector<int>& nums,vector<vector<int>> &ans,int start){
        if(start==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=start;i<nums.size();i++){
            swap(nums[i],nums[start]);
            backtracking(nums,ans,start+1);
            swap(nums[i],nums[start]);

        }
    }
    
};