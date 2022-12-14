class Solution {
public:
    
 static bool sortDiff(const vector<int> &v1, const vector<int> &v2){
        return v1[0] - v1[1] < v2[0] - v2[1];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans = 0;
        sort(costs.begin(), costs.end(), sortDiff);
        for(int i = 0; i < costs.size(); i++){
            if(i < costs.size() / 2)
                ans += costs[i][0];
            else
                ans += costs[i][1];
        }
        return ans;
    }
};