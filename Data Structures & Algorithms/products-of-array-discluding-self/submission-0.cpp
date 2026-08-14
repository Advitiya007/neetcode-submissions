class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(), t = 0;
        vector<int> ot(n);
        int prefix = 1;
        int suffix = 1;
        int r = n - 1, mult = 1;
        // vector<int> ot;
        for (int i = 0; i < n; i++) {
            ot[i] = prefix;
            prefix *= nums[i];
        }
        
        for (int i = n - 1; i >= 0; i--) {
            ot[i]*= suffix;

            suffix*= nums[i];
        }

        return ot;
    }
};
