class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
         
        vector<int> ms;
        
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                ms.push_back(nums1[i++]);
            } else {
                ms.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size()) {
            ms.push_back(nums1[i++]);
        }
        while (j < nums2.size()) {
            ms.push_back(nums2[j++]);
        }
        
        int mid = ms.size()/2;
        bool twoEl = ms.size()%2 == 0;
        if (twoEl) {
            return double(ms[mid-1] + ms[mid]) / 2;
        } else {
            return ms[mid];
        }
        
    }
};