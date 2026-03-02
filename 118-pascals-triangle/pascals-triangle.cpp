class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> array(numRows);
      //p
        for(int i=0;i<numRows;i++){
            array[i].resize(i+1);

            array[i][0]=array[i][i]=1;
            for(int j=1;j<i;j++){
                array[i][j]=array[i-1][j-1]+array[i-1][j];
            }
            array[i][i]=1;
        }
        return array;
    }
};