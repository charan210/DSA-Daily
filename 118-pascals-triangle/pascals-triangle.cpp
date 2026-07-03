class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> A;
        for(int i=0;i<n;i++){
           vector<int> row(i+1,1);
            for(int j=1;j<i;j++){
               row[j]=A[i-1][j-1]+A[i-1][j];
            }
            A.push_back(row);
          
        }
        return A;
    }
};