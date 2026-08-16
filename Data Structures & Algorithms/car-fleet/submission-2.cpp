class Solution {
   public:
    int carFleet(int target, vector<int>& pos, vector<int>& sp) {
        vector<pair<int, int>> pairs;
        int fleet = 0, n = pos.size();
        for (int i = 0; i < n; i++) {
            pairs.push_back({pos[i], sp[i]});
        }

        sort(pairs.begin(), pairs.end());
       
        float oldtt = -1;
        for (int i = n - 1; i >= 0; i--) {
float tt = 1.0f * (target - pairs[i].first) / pairs[i].second;            if (tt > oldtt) {
                fleet++;
                oldtt = tt;
            }
           
        }
        return fleet;
    }
};
