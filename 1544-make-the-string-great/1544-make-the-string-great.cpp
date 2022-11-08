class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){           
            if(!st.empty()&&(st.top()==s[i]-32||st.top()==s[i]+32)){
                st.pop();
            }  
            else{
                st.push(s[i]);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};
// class Solution {
// public:
//     string makeGood(string s) {
//         int i=0;
//         while(i<s.size()) {
//             if(i<s.size()-1 and (s[i]==char(s[i+1]+32) or s[i]==char(s[i+1]-32))) {
//                 s.erase(i,2);
//                 i=max(0,i-1);
//             }else {
//                 i+=1;
//             }  
//         }
//         return s;
//     }
// };