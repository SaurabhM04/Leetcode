class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int i=0,n=neededTime.size();
        int total_time=0;
        while(i<n) {
            int time=0,max_time=INT_MIN,j;
            for(j=i;j<n-1;j++) {
                if(colors[j]==colors[j+1]) {
                    time+=neededTime[j];
                    max_time=max(max_time,neededTime[j]);
                }else {
                    break;
                }
            }
            if(time>0) {
                time+=neededTime[j];
                max_time=max(max_time,neededTime[j]);
                total_time+=time-max_time;
            }
            i=j+1;
        }
        return total_time;
    }
};