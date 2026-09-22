class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int num:nums){
            s.push_back(to_string(num));
        }

        sort(s.begin(),s.end(),[](const string &a,const string &b){
            return a+b>b+a;
        });
        if(s[0]=="0") return "0";
       string result="";
       for(string ss:s){
        result+=ss;
       }
       return result;
    }
};