class Solution {
public:

  void  printff(vector<vector<int>> &ans,vector<int> &ds,vector<int> &nums,int index,int n){

      if(index==n){
        ans.push_back(ds);
        return;
      }
      if(nums.size()==0){
        ans.push_back({});
        return;
      }
      ds.push_back(nums[index]);
      printff(ans,ds,nums,index+1,n);
      ds.pop_back();
       printff(ans,ds,nums,index+1,n);

  }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        printff(ans,ds,nums,0,nums.size());
        return ans;
    }
};