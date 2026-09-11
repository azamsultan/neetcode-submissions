class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int curr;
        for(int i=0;i<tokens.size();++i){
            int ans;
            if(tokens[i]=="+"){
                ans=s.top();
                s.pop();
                ans=s.top()+ans;
                s.pop();
                s.push(ans);
            }
            else if(tokens[i]=="-"){
                ans=s.top();
                s.pop();
                ans=s.top()-ans;
                s.pop();
                s.push(ans);

            }
            else if(tokens[i]=="*"){
                ans=s.top();
                s.pop();
                ans=s.top()*ans;
                s.pop();
                s.push(ans);

            }
            else if(tokens[i]=="/"){
                ans=s.top();
                s.pop();
                ans=s.top()/ans;
                s.pop();
                s.push(ans);
            }
            else{
                curr=stoi(tokens[i]);
                s.push(curr);
            }

        }

        return s.top();

    }
};
