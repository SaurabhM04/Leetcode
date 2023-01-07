class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int g=0,c=0;
        for(int i=0; i<n; i++){
            g+=gas[i];
            c+=cost[i];
        }
        if(g<c) 
            return -1;
        int new_gas=0;
        int start=0;
        //kadane's algorithm
        for(int i=0;i<n;i++)
        {
            new_gas+=gas[i]-cost[i];
            if(new_gas<0)
            {
                start=i+1;
                new_gas=0;
            }
        }
        return start;
    }
};