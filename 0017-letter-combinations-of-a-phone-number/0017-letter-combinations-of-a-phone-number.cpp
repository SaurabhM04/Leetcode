class Solution {
public:
    void solve(int index,vector<string> &v,string digits,string output,string mapping[])
    {
        if(index>=digits.size()){
            if(digits.size())
            {v.push_back(output);
            }
            return;
        }            
        for(auto k : mapping[digits[index]-'0'])
        {         
            output+=k;
            solve(index+1,v,digits,output,mapping);
            output.pop_back();;
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        string output="";
        string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,v,digits,output,mapping);
        return v;
    }
};
// class Solution {
// public:
//     unordered_map<char,vector<char>> make_phone_pad() {
//         unordered_map<char,vector<char>>phone;
//         char ch='a';
//         for(char i='2';i<='9';i++) {
//             for(char j=ch;j<ch+3;j++) {
//                 phone[i].push_back(j);
//             }
//             ch=ch+3;
//             if(i=='7' or i=='9') {
//                 phone[i].push_back(ch);
//                 ch++;
//             }    
//         }
        
//         return phone;
//     }
    
   
//     void solve(int curr_index,string curr_string,string &digits,unordered_map<char,vector<char>>&pad,vector<string>&ans) {
//         if(curr_index==digits.size()) {
//             if(curr_string.size()) {
//                 ans.push_back(curr_string);
//             }
//             return ;
//         }
//         for(auto i:pad[digits[curr_index]]) {
//             curr_string+=i;
//             // cout<<"HELLO";
//             solve(curr_index+1,curr_string,digits,pad,ans);
//             curr_string.pop_back();
//         }
//     }
  
    
//     vector<string> letterCombinations(string digits) {
//         unordered_map<char,vector<char>>pad=make_phone_pad();
//         // for(auto i:pad) {
//         //     cout<<i.first<<" -> ";
//         //     for(auto j:i.second) {
//         //         cout<<j<<" ";
//         //     }
//         //     cout<<endl;
//         // }
//         vector<string>ans;
//         solve(0,"",digits,pad,ans);
//         return ans;
//     }
// };
