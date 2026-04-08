class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();// n0.of row
        int col= matrix[0].size(); // return no of element in row or no. of column ;
        int r=0;
        int c=col-1;  // yha se sorted and check point hai
        while(r<row && c>=0){
            
            if(matrix[r][c]==target){
                return true;
            }

            if(matrix[r][c]<target){
                r++;
            }
            else{
                c--;
            }
        }
        return false;
    }
};