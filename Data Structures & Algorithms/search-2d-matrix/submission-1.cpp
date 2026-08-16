class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
    int m = matrix[0].size(), indx=-1;
        for( int i =0 ; i < n ; i++){
            if( matrix[i][0] <= target && matrix[i][m-1] >= target) {indx=i; break;}
        }
        if(indx==-1) return false;
        int left = 0;
    int right = matrix[0].size()-1;

    while (left <= right) {
        // Safe midpoint calculation preventing overflow for large indices
        int mid = left + (right - left) / 2;

        if (matrix[indx][mid] == target) {
            return true;
        } 
        if (matrix[indx][mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
    }
};
