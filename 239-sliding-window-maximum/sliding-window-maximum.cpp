class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int n=nums.size();
       vector<int> list;
       deque<int> de;
       for(int i=0;i<n;i++){
          if(!de.empty() && de.front()<=i-k){
            de.pop_front();
          }
          while(!de.empty() && nums[de.back()]<=nums[i]){
            de.pop_back();
          }
          de.push_back(i);
          if(i>=k-1) list.push_back(nums[de.front()]);
       }
       return list;
    }
};