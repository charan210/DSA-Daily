class Solution {
public:
   
    void solve(vector<vector<string>> &ans, vector<string> &board, int n, int col, vector<int>& left,
        vector<int> &lower,
        vector<int> &upper){
        if(col==n){
            ans.push_back(board);
            return;
        }
       
       for(int i=0;i<n;i++){
        if(left[i]==0&& lower[i+col]==0 && upper[n-1+col-i]==0){
            board[i][col]='Q';
            left[i]=1;
            lower[i+col]=1;
            upper[n-1+col-i]=1;
            solve(ans,board,n,col+1,left,lower,upper);
             board[i][col]='.';
            left[i]=0;
            lower[i+col]=0;
            upper[n-1+col-i]=0;

        }
       }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
         vector<int> left(n,0);
        vector<int> lower((2*n)-1,0);
        vector<int> upper((2*n)-1,0);
        solve(ans,board,n,0,left,lower,upper);
        return ans;
    }
};