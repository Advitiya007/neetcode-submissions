class Solution {
public:
void fxn(int indx, vector<int>& veci, vector<vector<int>>& ans,
         vector<int>& arr, int n) {

    if (indx == n) {
        ans.push_back(veci);
        return;
    }

    // Include arr[indx]
    veci.push_back(arr[indx]);
    fxn(indx + 1, veci, ans, arr, n);

    // Exclude arr[indx]
    veci.pop_back();
    fxn(indx + 1, veci, ans, arr, n);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>veci;
         vector<vector<int>>ans;
        fxn(0 , veci , ans , nums, n);
        return ans;
    }
};
