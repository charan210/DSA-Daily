class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> n1;
        vector<int> n2;
        for(int i=0;i<n;i++){
            if(nums[i]>=0) n1.push_back(nums[i]);
            else n2.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(i%2==0) nums[i]=n1[i/2];
            else nums[i]=n2[i/2];
        }
        return nums;
    }
};