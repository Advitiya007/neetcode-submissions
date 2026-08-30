class Solution {
   public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // priority_queue<pair<int, pair< int , int>>p;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> p;        int n = points.size();
        vector<vector<int>> veci;
        // for( auto &it : points){
        //     int dis = sqrt((it[0]*it[0]+ it[1]*it[1]));
        //     p.push({dis, {it[0], it[1]}});
        //     p.push({dis, {it[0], it[1]}});
        // }
        for (int i = 0; i < n; i++) {
            int dis = (points[i][0] * points[i][0] + points[i][1] * points[i][1]);
            p.push({dis, i});
            // p.push({dis, {it[0], it[1]}});
        }

       
            while(!p.empty() && k) {
                int x = p.top().second;
                p.pop();
                // cout<< x << endl;
                // int y= pq.front().second.second;
                veci.push_back({points[x][0], points[x][1]});
                k--;
            }
            // if (k <= 0) return veci;
        // }
        return veci;
    }
};
