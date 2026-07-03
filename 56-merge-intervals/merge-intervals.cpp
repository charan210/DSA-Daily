class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int n=in.size();
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
           if(ans.empty() || in[i][0]>ans.back()[1]){
              ans.push_back(in[i]);
           }

           else{
            ans.back()[1]=max(ans.back()[1],in[i][1]);
           }
        }
        return ans;
    }
};