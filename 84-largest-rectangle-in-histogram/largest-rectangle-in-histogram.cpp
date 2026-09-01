class Solution {
public:

    
    int largestRectangleArea(vector<int>& h) {
         int maxa=0;
          int n=h.size();
          stack<int> st;
        
         for(int i=0;i<n;i++){
            while(!st.empty()&&h[st.top()]>h[i]){
               int e=h[st.top()];
               st.pop();
               int nse=i;
               int pse=st.empty()?-1:st.top();
               maxa=max(maxa,e*(nse-pse-1));
            }

            st.push(i);
         }
          while(!st.empty()){
               int e=h[st.top()];
               st.pop();
               int nse=n;
               int pse=st.empty()?-1:st.top();
               maxa=max(maxa,e*(nse-pse-1));
            }
    return maxa;
         }
};