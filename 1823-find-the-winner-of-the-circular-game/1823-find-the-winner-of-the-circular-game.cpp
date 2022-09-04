class Solution {
public:
    void solve(vector<int>&v,int k, int index)
    {
        if(v.size()==1){
            return;
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,k,index);
        return;
    }
    int findTheWinner(int n, int k) {
        //int index;
        vector<int>v(n);
        for(int i=0; i<n;i++){
        v[i]=i+1;
        }
        k--;
       // int ans=-1;
        solve(v,k,0);
            return v[0];
    }
};