class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i:nums) {
            freq[i]+=1;
        }
        int i=1;
        while(freq.find(i)!=freq.end()) {
            i++;
        }
        return i;
    }
};