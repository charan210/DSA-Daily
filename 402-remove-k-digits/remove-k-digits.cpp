class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> s;
        string st="";
        int n=num.size();
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top()-'0'>num[i]-'0'&& k>0){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while(k>0){
            s.pop();
            k--;
        }
        while(!s.empty()){
            st+=s.top();
            s.pop();
        }
        if(st.size()==0) return "0";
        while(st.size()!=0&&st.back()=='0') st.pop_back();

        reverse(st.begin(),st.end());
        if(st.empty()) return "0";
        return st;

    }
};