class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s.length() == 1)return false;
        for(auto ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                stk.push(ch);
            }
            else if( stk.empty() && (ch == ')' || ch == '}' || ch == ']') ){
                return false;
            }
            else if(  
                (stk.top() == '(' && ch == ')') ||
                (stk.top() == '{' && ch == '}') || 
                (stk.top() == '[' && ch == ']')
                ){
                   stk.pop();
                }
            else{
                return false;
            }
            
            
        }
        if(stk.empty())return true;
        return false;
        
    }
};