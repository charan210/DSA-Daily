class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        int n=nums.size();
        vector<long long> presum(n+1, 0);
for(int i=0; i<n; i++) {
    presum[i+1] = presum[i] + nums[i];
}

      stack<int> st;
  vector<int> left(n), right(n);
      for(int i=0;i<n;i++){
        while(!st.empty()&&nums[st.top()]>=nums[i]){
            st.pop();
        }
        left[i]=st.empty()?-1:st.top();
        st.push(i);
      }
      while(!st.empty()) st.pop();
      for(int i=n-1;i>=0;i--){
        while(!st.empty()&&nums[st.top()]>nums[i]){
            st.pop();
        }
        right[i]=st.empty()?n:st.top();
        st.push(i);
      }
      long long ma=0;
      for(int i=0;i<n;i++){
      long long sum=presum[right[i]]-presum[left[i]+1];
      
        ma=max(ma,sum*nums[i]);
      }
      return ma % 1000000007;

    }
};