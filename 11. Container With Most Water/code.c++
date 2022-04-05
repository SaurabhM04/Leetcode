class Solution {
public:
    int maxArea(vector<int>& height) {
       
    int area = 0;
    int n=height.size();
	int i=0, j=n-1;
	while(i<j) {
        int x = min(height[i], height[j]);
		int y = (j-i) * x;
		area = max(area, y);
		if(height[i] < height[j])
			i++;
		else
            j--;
	}
	return area;
    }
};