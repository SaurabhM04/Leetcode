class Solution {
public:
    string dead(string s){
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && s[i]=='#'){
                st.pop();
            }
            else if(s[i]!='#'){
                st.push(s[i]);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        //cout<<str<<" "<<endl;
        return str;
    }
    bool backspaceCompare(string s, string t) {
       
        return dead(s)==dead(t);
        
    }
};
// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
        
//         stack<char>st,st1;
//         for(int i=0; i<s.size(); i++){
//             if(!st.empty() && s[i]=='#'){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//         for(int i=0; i<t.size(); i++){
//             if(!st1.empty() && t[i]=='#'){
//                 st1.pop();
//             }
//             else{
//                 st1.push(t[i]);
//             }
//         }
//         return st==st1;
        
//     }
// };