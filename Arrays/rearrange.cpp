class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        // Step 1: Separate positives and negatives
        for (int x : nums) {
            if (x > 0) pos.push_back(x);
            else neg.push_back(x);
        }
        
        // Step 2: Merge alternately
        vector<int> ans;
        int n = pos.size(); // same as neg.size()
        for (int i = 0; i < n; i++) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        
        return ans;
    }
};
