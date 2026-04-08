class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();// n0.of row
        int col= matrix[0].size(); // return no of element in row or no. of column ;
        int start=0;
        int end=(col*row)-1;  // poora end tak jana hai matrix ke
        while(start<=end){
            int mid=start+(end-start)/2;
            int r = mid / col; // location in column
            int c = mid % col; // location in row
            if(matrix[r][c]==target){
                return true;
            }

            if(matrix[r][c]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};