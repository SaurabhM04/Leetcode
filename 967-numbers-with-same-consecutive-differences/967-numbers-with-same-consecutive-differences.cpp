// class Solution {
// public:
//     void solve(string s,int n,int k,vector<int>&ans)
//     {
//         if(s.size()==n)
//         {
//             ans.push_back(stoi(s));
//             return;
//         }
//         for(int i=0;i<=9;i++)
//         {
//             if(abs(s.back()-'0'-i)==k)
//             {
//                 solve(s+to_string(i),n,k,ans);
//             }
//         }
//     }
//     vector<int> numsSameConsecDiff(int n, int k) {
//         vector<int>ans;
//         for(int i=1;i<=9;i++)
//         {
//             solve(to_string(i),n,k,ans);
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     void solve(int digit,int num,int cnt,int n,int k,vector<int>&ans)
//     {
//        if(cnt==n)
//        {
//            ans.push_back(num);
//            return;
//        }
//        for(int i=0;i<=9;i++)
//        {
//            if(abs(digit-i)==k)
//            {
//                solve(i,num*10+i,cnt+1,n,k,ans);
//            }
//        }
//     }
//     vector<int> numsSameConsecDiff(int n, int k) {
//         vector<int>ans;
//         for(int i=1;i<=9;i++)
//         {
//             solve(i,i,1,n,k,ans);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    void solve(int digit,vector<int> &curr_num,int n,int k,vector<int>&ans) {
        if(digit<0 or digit>9 or curr_num.size()>n) {
            return ;
        }
        curr_num.push_back(digit);
        if(curr_num.size()==n) {
            int num=0;
            for(int i=0;i<n;i++) {
                num=curr_num[i]+num*10;
            }     
            ans.push_back(num);
        }
        solve(digit+k,curr_num,n,k,ans);
        if(k!=0) {
        solve(digit-k,curr_num,n,k,ans);
        }
        curr_num.pop_back(); // using backtracking makes the code highly efficient and also don't forget to pass the curr_num vector by reference
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans;
        vector<int>curr_num;
        for(int i=1;i<=9;i++) {
            solve(i,curr_num,n,k,ans);
        }
        return ans;
    }
};