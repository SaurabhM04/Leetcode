class Solution {
// static bool col(const vector<int>& v1, const vector<int>& v2)
// {
//     return v1[1] > v2[1];
// }
public:
    int minRefuelStops(int target, int startfuel, vector<vector<int>>& v) {
        int n = v.size();   
        priority_queue<int> pq; 
        int curr = startfuel; 
        int i = 0; 
        int res = 0;
        while(curr < target) 
        { 
            while(i < n && curr >= v[i][0])
            {
              
                pq.push(v[i][1]);
                i++;
            }
            
            if(pq.empty()) 
                return -1;
            
            int dist = pq.top();
            pq.pop();
            
            curr += dist;
            res++;
        }
        
        return res;
        
    }
};