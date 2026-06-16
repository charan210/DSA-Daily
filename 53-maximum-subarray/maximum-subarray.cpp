class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=0;
     int   msum=INT_MIN;
       int n=nums.size();
       int start=0,end=0;
       int st=0;
       for(int i=0;i<n;i++){
        if(sum==0) start=i;
        sum+=nums[i];
        if(sum>msum){
          msum=sum;
           st=start;
           end=i; 
        }
        if(sum<0) sum=0;
        
       }
       return msum;
    }
};