class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int c=0;
        int n=nums.size();
        int sum=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]>sum/((n-1)-i)) c++;
            sum=sum+nums[i];//che
        }
        return c;
    }
};