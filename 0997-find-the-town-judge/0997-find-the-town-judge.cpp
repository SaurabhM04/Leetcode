// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
//         vector<int>vis(n+1,0);
//         for(auto &i:trust)
//         {
//             vis[i[0]]--;
//             vis[i[1]]++;
//         }
//         for(int i=1;i<=n;i++)
//         {
//             if(vis[i]==n-1) return i;
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trustme(n+1,0),trustother(n+1,0);
        for(auto i:trust) {
            trustme[i[1]]++;
            trustother[i[0]]++;
        }
        int judge=-1;
        for(int i=1;i<=n;i++) {
            if(trustme[i]==n-1 and trustother[i]==0) {
                return i;
            }
        }
        return -1;;

    }
};