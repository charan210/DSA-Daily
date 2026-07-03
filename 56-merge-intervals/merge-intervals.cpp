class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int n=in.size();
        sort(in.begin(),in.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int st=in[i][0];
            int end=in[i][1];
            if(!ans.empty()&&end<=ans.back()[1]) continue;

            for(int j=i+1;j<n;j++){
                if(end>=in[j][0]){
                    end=max(end,in[j][1]);
                }
                else break;
            }
            ans.push_back({st,end});
        }
        return ans;
    }
};