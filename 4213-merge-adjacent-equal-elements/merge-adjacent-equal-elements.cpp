class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        

      vector<long long> s;
        for(int i=0;i<nums.size();i++){
            long long sum=nums[i];
            while(!s.empty() && s.back()==sum){
                sum+=s.back();
                s.pop_back();
            }
            s.push_back(sum);
        
        }
        return s;
    }
};