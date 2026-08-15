class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l =0 , r = heights.size()-1;
        int maxdiff= INT_MIN;
        while( l < r){
          int  diff= min(heights[l], heights[r]) *(r-l);
            maxdiff= max( diff, maxdiff);
            if( heights[l]< heights[r]) l++;
            else r--;
            // l++; r--;
        }
        return maxdiff;
    }
};
