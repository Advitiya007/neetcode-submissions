class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
unordered_set<int> seti(nums.begin(), nums.end());
        int maxi = * max_element(nums.begin() , nums.end());
        // int maxi = * max_element(nums.begin() , nums.end());
// for(auto it: nums){
//    seti.push(it);
// }
int maxlen =0 , len =0;
        for( auto x: seti){
            if( seti.find(x-1)== seti.end()){
int curr = x;
len=1;
while(  seti.find( curr+1)!= seti.end()){
   curr= curr+1;
    len++;
}
            }
    maxlen= max( len , maxlen);
        }
    return maxlen;
    }
};
