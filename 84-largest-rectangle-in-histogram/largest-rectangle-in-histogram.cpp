class Solution {
public:

    vector<int> nse(vector<int> &h){
        int n=h.size();
        stack<int> s;
     vector<int> ns(n);
     for(int i=n-1;i>=0;i--){
        while(!s.empty()&& h[s.top()]>=h[i]) s.pop();
        ns[i]=s.empty()?n:s.top();
        s.push(i);
     }
     return ns;
    }

     vector<int> pse(vector<int> &h){
        int n=h.size();
        stack<int> s;
     vector<int> ps(n);
     for(int i=0;i<n;i++){
        while(!s.empty()&& h[s.top()]>=h[i]) s.pop();
        ps[i]=s.empty()?-1:s.top();
        s.push(i);
     }
     return ps;
    }
    int largestRectangleArea(vector<int>& h) {
         int maxa=0;
         int n=h.size();
         vector<int> ns=nse(h);
         vector<int> ps=pse(h);
         for(int i=0;i<n;i++){
            maxa=max(maxa,h[i]*(ns[i]-ps[i]-1));
         }
    return maxa;
         }
};