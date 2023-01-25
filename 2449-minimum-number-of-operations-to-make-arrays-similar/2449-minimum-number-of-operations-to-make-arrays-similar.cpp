class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        vector<int>even,odd,even1,odd1;
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        for(int i=0; i<target.size(); i++)
        {
            if(target[i]%2==0)
                even1.push_back(target[i]);
            else
                odd1.push_back(target[i]);
        }
        long long int ev=0,od=0;
        for(int i=0; i<even.size(); i++)
        {
            if(even[i]-even1[i]>0)
                ev+=even[i]-even1[i];
        }
        for(int i=0; i<odd.size(); i++)
        {
            if(odd[i]-odd1[i]>0)
                od+=odd[i]-odd1[i];
        }
        return ev/2+od/2;
    }
};