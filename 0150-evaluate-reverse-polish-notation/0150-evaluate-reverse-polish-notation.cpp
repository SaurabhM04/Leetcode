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