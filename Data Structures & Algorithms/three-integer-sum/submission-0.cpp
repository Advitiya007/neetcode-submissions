class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
vector<vector<int>>ans;
        for (int i = 0; i < n-2 ; i++) {
            if(i > 0 && nums[i]== nums[i-1]) continue;
            int target = -nums[i];
            int l = i+1, r = n - 1;
            while (l < r) {
                int sum = nums[l] + nums[r];
                if (target == sum)
                   {ans.push_back({nums[i], nums[l], nums[r]});
                   while( l < r && nums[l]== nums[l+1]) l++;
                   while( l < r && nums[r]== nums[r-1]) r--;
                   l++; r--;}
                else if (target > sum)
                    l++;
                else if (target < sum)
                    r--;
            }
        }
        return ans;
    }
};
