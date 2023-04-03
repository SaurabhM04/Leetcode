class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1;
        int sum=0,sum1=0;
         sort(people.begin(), people.end());
         while(i<=j){
             sum=people[i]+people[j];
             if(sum<=limit){
                 i++;
                 j--;
             }
             else{
              j--;
             }
             sum1++;
          
         }
        return sum1;
    }
};