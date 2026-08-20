class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> m;
        int n1=nums1.size();
        int n2=nums2.size();
  
     
        for(int i=n2-1;i>=0;i--){
            while(!s.empty()&&s.top()<=nums2[i]){
               s.pop();
            }
            if(!s.empty()){
                m[nums2[i]]=s.top();
            }
            else{
                m[nums2[i]]=-1;
            }
            s.push(nums2[i]);
        }
        vector<int> temp;
        for(int i=0;i<n1;i++){
           temp.push_back(m[nums1[i]]);
        }
        return temp;
    }
};