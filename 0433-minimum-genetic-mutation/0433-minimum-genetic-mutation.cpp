class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        queue<string>q;
        q.push(start);
        int level=0;
        vector<int>visited(bank.size(),0);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                string temp=q.front();
                q.pop();
                if(end==temp)
                    return level;
                for(int i=0; i<bank.size(); i++){
                    int count=0;
                    if(visited[i])
                        continue;
                    for(int j=0; j<bank[i].size(); j++)
                    {
                        
                        if(temp[j]!=bank[i][j])
                            count++;
                        if(count>1)
                            break;
                    }
                    if(count==1){
                       visited[i]=1;
                        q.push(bank[i]);
                    }
                }
            }
            level++;
        }
        return -1;
    }
};