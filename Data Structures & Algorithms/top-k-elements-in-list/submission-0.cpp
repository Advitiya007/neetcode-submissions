class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
int n = nums.size();
//     if (n <= 1) return;
    unordered_map< int , int> hash;
    vector<vector<int>>buckets(n+1);
  vector<int>ans;
for( auto it : nums){
    hash[it]++;
}
// priority_queue< pair<int , int>, vector<pair< int , int>> , greater<pair<int, int>>>pq;
// for( auto &pq: count){

// }
    // for (int i = 0; i < n; i++) {
    //     int bucketidx =  hash[i]; // Assuming elements are in range [0, 1)
    //     buckets[bucketidx].push_back(nums[i]);
    // }

    for(const auto &entry : hash){
        buckets[entry.second].push_back(entry.first);
    }
    int i=buckets.size()-1;
        while( i >= 0){
            for(auto el : buckets[i]){
                ans.push_back(el);
                // k--;
            }
            if(ans.size()==k) return ans;
            i--;
        }
           return ans;
    }
};
