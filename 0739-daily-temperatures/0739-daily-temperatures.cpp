class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        int s=0,x=0;
        vector<int> ans(n,0);
        int sum=0;
        stack<int> st;
        for(int i=n-1; i>=0; i--)
        {
         
          while(!st.empty() && temp[st.top()] <= temp[i] )
              st.pop();
            
            if(!st.empty()){
                ans[i] = st.top()-i;
                //cout<<st.top()<<" "<<i<<endl;
            }
            
            st.push(i);
            
        }
        return ans;
    }
};