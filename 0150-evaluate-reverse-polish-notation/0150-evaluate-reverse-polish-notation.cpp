class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<long long int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                long long int a = s.top();
                s.pop();
                long long int b = s.top();
                s.pop();
                //int res;
                if(tokens[i] == "+"){
                    s.push(a+b);
                }
                else if(tokens[i] == "-"){
                    s.push(b-a);
                }
                else if(tokens[i] == "*"){
                    s.push(a*b);
                }
                else if(tokens[i] == "/"){
                    s.push(b/a);
                }
            }
            else
                s.push((long long)stoi(tokens[i]));
        }
        return s.top(); 
    }
};

// class Solution {
// public:
//     int evalRPN(vector<string>& tokens) {
//         int n=tokens.size();
//         stack<string>st;
//         for(int i=0;i<n;i++)
//         {
//             if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
//             {
//                 long long a=stoll(st.top());
//                 st.pop();
//                 long long b=stoll(st.top());
//                 st.pop();
//                 if(tokens[i]=="+") a=a+b;
//                 if(tokens[i]=="-") a=b-a;
//                 if(tokens[i]=="*") a=a*b;
//                 if(tokens[i]=="/") a=b/a;
//                 st.push(to_string(a));
//             }
//             else 
//             {
//                 st.push(tokens[i]);
//             }
//         }
        
//         return stoll(st.top());
//     }
// };