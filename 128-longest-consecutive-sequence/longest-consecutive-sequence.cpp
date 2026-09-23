class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> se(nums.begin(),nums.end());
        int longest=1;
        for(auto s:se){
            if(se.find(s-1)==se.end()){
                int count=1;
                int x=s;
                while(se.find(x+1)!=se.end()){
                    count++;
                    x++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
       }
};

    