// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int>v;
//         v.push_back(1);
//         v.push_back(2);
//         v.push_back(3);
//         for(int i=3; i<n; i++){
//             v.push_back(v[i-1]+v[i-2]);
//         }
//         return v[n-1];
//     }
// };

class Solution {
public:
    int climbStairs(int n) {
      
     int m,f=1,s=2;
     if(n==1 ||n==2)
        return n;
     for(int i=0;i<n-2;i++){
         m=f+s;
         f=s;
         s=m;
     }
     return m;   
    }
};  