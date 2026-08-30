class Solution {
public:
void solve ( vector<int>& nums, vector<int>& veci ,  vector<vector<int>>& ans, int target , int sum , int indx , int n){
    if( sum== target) {ans.push_back(veci); return;}
    if( indx==n || sum > target) return;
    
    veci.push_back(nums[indx]);
    solve(nums ,veci,ans,target, sum+nums[indx], indx, n);
    veci.pop_back();
    solve(nums ,veci,ans,target, sum, indx+1, n);
    // solve(nums , target+arr[indx]);

}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;vector<int> veci;
        int n = nums.size();
        solve(nums , veci, ans ,target , 0 , 0, n );
        return ans ;

    }
};
