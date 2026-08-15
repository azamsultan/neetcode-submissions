class Solution {
public:
    bool isPalindrome(string s) {
        int count=0;
        string v="0123456789";
        deque<char>half1;
        deque<char>half2;

        string cleans="";
        for(char c:s){
            if(v.find(c)!=string::npos || isalpha(c)){
                cleans+=c;
            }
        }
        
        for(int i=0;i<cleans.size()/2;++i){
            half1.push_back(tolower(cleans[i]));
        }
        for(int j=cleans.size()-1;half2.size()<cleans.size()/2;--j){  
            half2.push_back(tolower(cleans[j]));    
        }
        if(half1!=half2){
            return false;
        }

        return true;
    }
};
