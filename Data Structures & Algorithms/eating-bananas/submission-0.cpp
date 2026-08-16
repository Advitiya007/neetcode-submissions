class Solution {
   public:
  int check(int k, vector<int>& piles, int n ) {
        int ho = 0;
        for (int i = 0; i < n; i++) {
            if (piles[i] < k)
                ho += 1;
            else
                ho += (piles[i]+k-1) / k;
        }
        return ho;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int n=piles.size();
        int ans = INT_MAX;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (check(mid, piles, n) <= h) {
                ans = mid;
                right = mid - 1;
            }

            else
                left = mid + 1;
        }
        return ans;
    }
};
