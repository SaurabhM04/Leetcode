class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& num) {
  
    vector<vector<int>> res;

     if (num.size() == 0)
        return res;
    
    sort(num.begin(), num.end());
    res.push_back(num[0]);
    int j = 0;
    for (int i = 1; i < num.size(); i++)
    {
        if (res[j][1] >= num[i][0])
        {
            res[j][1] = max(res[j][1], num[i][1]);
        }
        else
        {
            res.push_back(num[i]);
            j++;
        }
    }
    return res;
    }
};