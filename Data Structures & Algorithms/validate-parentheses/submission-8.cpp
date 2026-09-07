class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
        stack<char>h;

        for(int i=0;i<s.size();++i){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                h.push(s[i]);
            }else{
                if(h.empty()){
                    return false;
                }
                if(s[i]==']'&&h.top()=='['){
                    h.pop();
                }
                else if(s[i]=='}'&&h.top()=='{'){
                    h.pop();
                }
                else if(s[i]==')'&&h.top()=='('){
                    h.pop();
                }
                else{
                    return false;
                }
            }
            
            
        }
        return h.empty();
    }
};
