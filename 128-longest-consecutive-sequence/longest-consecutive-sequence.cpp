class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int longest=0,count=0,left=INT_MIN;
       for(int i=0;i<nums.size();i++){
            if(nums[i]-1==left){
                count++;
                left=nums[i];
            }
            else if(nums[i]!=left){
                count=1;
                left=nums[i];
            }
            longest=max(longest,count);
       }
       return longest;
       }
};

    